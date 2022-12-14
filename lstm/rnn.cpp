#include <iostream>
#include <cmath>
#include <string.h>
#include "rnn.h"
#include "weight.h"


// 矩阵与向量的乘法

//#define gemvm1(res, a, b, row, col) \
//{ \
//	std::fill_n(res, row, 0.0); \
//	for (int r = 0; r < row; r++) \
//		for (int c = 0; c < col; c++) \
//			res[r] += a[r][c] * b[c]; \
//}


inline void gemvm(float res[HIDDEN_DIM], float a[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM], float b[INPUT_DIM + HIDDEN_DIM])
{
	loop_outer:
	for (int r = 0; r < HIDDEN_DIM; r++)
	{
#pragma HLS PIPELINE
		loop_iner:
		for (int c = 0; c < INPUT_DIM + HIDDEN_DIM; c++)
		{
#pragma HLS PIPELINE
			res[r] += a[r][c] * b[c];
		}
	}
}

inline void gemvm1(float res[CLASS_NUM], float a[CLASS_NUM][HIDDEN_DIM], float b[HIDDEN_DIM])
{
	loop_outer:
	for (int r = 0; r < CLASS_NUM; r++)
	{
#pragma HLS PIPELINE
		loop_iner:
		for (int c = 0; c < HIDDEN_DIM; c++)
		{
#pragma HLS PIPELINE
			res[r] += a[r][c] * b[c];
		}
	}
}


////void matrix_mul(ap_int<8> A[4][4],ap_int<8> B[4][4],ap_int<16> C[4][4],int row, int col)
//{
//	for(int i=0;i<4;i++)
//	{
//
//		for(int j=0;j<4;j++)
//		{
//
//			C[i][j]=0;
//			for(int k=0;k<4;k++)
//			{
//				C[i][j]=C[i][j]+A[i][k]*B[k][j];
//			}
//		}
//	}
//}



// 向量的sigmoid函数
inline void sigmoid(float* res, float* a, int size)
{
	// 计算输入向量a的sigmoid函数值
	// 计算结果存储到向量res中
	// TODO:
	int i;
	i_loop:for (i = 0;i < size; i++)
	{
#pragma HLS PIPELINE
		res[i] = (1 / (1 + exp(-a[i])));
	}
}

// 向量的tanh函数
inline void tanh(float* res, float* a, int size)
{
	// 计算输入向量a的双曲正切函数值
	// 计算结果存储到向量res中
	// TODO:
	int i;
	i_loop:for (i = 0;i < size; i++)
	{
#pragma HLS unroll factor = 2
#pragma HLS PIPELINE
		res[i] =( (exp(a[i]) - exp(-a[i])) / (exp(a[i]) + exp(-a[i])));
	}
}

// 向量加法
inline void geva(float* res, float* a, int size)
{
	// 将向量res和向量a相加
	// 计算结果存储到向量res中
	// TODO:
	int i;
	i_loop:for (i = 0;i < size; i++)
	{
		#pragma HLS unroll factor = 2
		#pragma HLS PIPELINE II = 1
		res[i] += a[i];
	}
}

// 向量的Hadamard积
inline void hprod(float* res, float* a, float* b, int size)
{
	// 计算向量a和向量b的Hadamard积
	// 计算结果存储到向量res中
	// TODO:
	int i;
	i_loop:	for (i = 0;i < size; i++)
	{
#pragma HLS unroll factor = 2
#pragma HLS PIPELINE II = 1
		res[i] =( a[i] * b[i]);
	}
	
}

// RNN前向推导(输入层->LSTM->线性分类器)
#if CSIM_ON == 1
int infer(float input[IMG_SIZE])
#else
void infer(float input[IMG_SIZE], float res[CLASS_NUM])
#endif
{
	float gate_f[HIDDEN_DIM] = { 0.0 };		// LSTM cell的遗忘门控制向量
	float gate_i[HIDDEN_DIM] = { 0.0 };		// LSTM cell的输入门控制向量
	float stat_C[HIDDEN_DIM] = { 0.0 };		// LSTM cell的新状态
	float C_t[HIDDEN_DIM] = { 0.0 };		// LSTM cell的状态
	float gate_o[HIDDEN_DIM] = { 0.0 };		// LSTM cell的输出门控制向量
	float h_t[HIDDEN_DIM] = { 0.0 };		// LSTM cell的输出

	float vec_i[INPUT_DIM + HIDDEN_DIM];	// LSTM cell的输入向量[x(t), h0(t-1)]
	float vec_tmp[HIDDEN_DIM];				// 中间变量

	// 输入层->隐藏层(LSTM cell)
	for (int i = 0; i < INPUT_DIM; i++)
	{
		/*
		 * 头文件weight.h中存储了RNN网络的权值和偏置, 包含以下几个FP32数组:
		 *
		 * 1. LSTM cell遗忘门的权值和偏置:
		 *   float Weight0_f[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
		 *   float Bias0_f[HIDDEN_DIM];
		 *
		 * 2. LSTM cell输入门的权值与偏置:
		 *   float Weight0_i[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
		 *   float Bias0_i[HIDDEN_DIM];
		 *
		 * 3. LSTM cell输入门产生的候选状态的权值与偏置:
		 *   float Weight0_c[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
		 *   float Bias0_c[HIDDEN_DIM];
		 *
		 * 4. LSTM cell输出门的权值和偏置:
		 *   float Weight0_o[HIDDEN_DIM][INPUT_DIM + HIDDEN_DIM];
		 *   float Bias0_o[HIDDEN_DIM];
		 *
		 * 5. 输出层线性分类器的权值和偏置:
		 *   float Weight_lc[CLASS_NUM][HIDDEN_DIM];
		 *   float Bias_lc[CLASS_NUM];
		 * */

		// 构造LSTM cell0的输入向量
		for (int j = 0; j < INPUT_DIM; j++)		vec_i[j] = input[i * INPUT_DIM + j];
		for (int j = 0; j < HIDDEN_DIM; j++)	vec_i[INPUT_DIM + j] = h_t[j];


		loop_reigion:
		{
		/*
		 * 1. 计算LSTM cell的遗忘门控制向量.
		 * */
		// TODO:

		LF:
		gemvm(vec_tmp, Weight0_f, vec_i);
//		gemvm(vec_tmp, Weight0_f, vec_i, HIDDEN_DIM, INPUT_DIM + HIDDEN_DIM);
		geva(vec_tmp, Bias0_f, HIDDEN_DIM);
		sigmoid(gate_f, vec_tmp, HIDDEN_DIM);

		/*
		 * 2. 计算LSTM cell的输入门控制向量.
		 * */
		// TODO:
		LI:
		gemvm(vec_tmp, Weight0_i, vec_i);
//		gemvm(vec_tmp, Weight0_i, vec_i, HIDDEN_DIM, INPUT_DIM + HIDDEN_DIM);
		geva(vec_tmp, Bias0_i, HIDDEN_DIM);
		sigmoid(gate_i, vec_tmp, HIDDEN_DIM);

		/*
		 * 3. 计算LSTM cell输入门产生的候选状态向量
		 * */
		// TODO:
		LC:
//		gemvm(vec_tmp, Weight0_c, vec_i, HIDDEN_DIM, INPUT_DIM + HIDDEN_DIM);
		gemvm(vec_tmp, Weight0_c, vec_i);
		geva(vec_tmp, Bias0_c, HIDDEN_DIM);
		tanh(stat_C, vec_tmp, HIDDEN_DIM);
		}
		/*
		 * 4. 计算LSTM cell的输出门控制向量.
		 * */
		// TODO:
		LO:
//		gemvm(vec_tmp, Weight0_o, vec_i, HIDDEN_DIM, INPUT_DIM + HIDDEN_DIM);
		gemvm(vec_tmp, Weight0_o, vec_i);
		geva(vec_tmp, Bias0_o, HIDDEN_DIM);
		sigmoid(gate_o, vec_tmp, HIDDEN_DIM);

		/*
		 * 5. 计算LSTM cell的新状态.
		 * */
		// TODO:
		LCT:
		hprod(vec_tmp, gate_f, C_t, HIDDEN_DIM);
		hprod(C_t, gate_i, stat_C, HIDDEN_DIM);
		geva(C_t, vec_tmp,HIDDEN_DIM);

		/*
		 * 6. 计算LSTM cell的输出.
		 * */
		// TODO:
		LH:
		tanh(vec_tmp, C_t, HIDDEN_DIM);
		hprod(h_t, gate_o, vec_tmp, HIDDEN_DIM);



	}

#if CSIM_ON == 1
	float res[CLASS_NUM];
#endif

	// 隐藏层(LSTM cell)->输出层(线性分类器)

//	gemvm1(res, Weight_lc, h_t);
	gemvm1(res, Weight_lc, h_t);
	geva(res, Bias_lc, CLASS_NUM);

#if CSIM_ON == 1
	int label = 0;
	for (int i = 1; i < CLASS_NUM; i++)

if (res[i] > res[label]) label = i;

	return label;
#endif
}
