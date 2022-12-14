#ifndef RNN_H
#define RNN_H

#define INPUT_DIM	28		// 输入维度
#define IMG_SIZE	INPUT_DIM * INPUT_DIM
#define LAYER_NUM   1       // 隐藏层数量/LSTM cell数量
#define HIDDEN_DIM	64		// 隐藏层节点数, 又称num_units
#define CLASS_NUM	5		// 输出节点数


// C仿真开关
#define CSIM_ON 0		// 仿真时设为1, 综合时设为0


#if CSIM_ON == 1
// 仅供C仿真使用的前向推导函数定义
int infer(ac_fixed<4,-1,true> input[IMG_SIZE]);
#else
// RNN前向推导(输入层->LSTM0->线性分类器)
void infer(float input[IMG_SIZE], float res[CLASS_NUM]);
#endif

#endif
