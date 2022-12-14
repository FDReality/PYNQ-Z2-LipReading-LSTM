#ifndef MNIST_LSTM_UTILS_H
#define MNIST_LSTM_UTILS_H

#include <assert.h>
#include <ap_axi_sdata.h>

typedef ap_axiu<32, 1, 1, 1> stream_t;

// --------------------------------------------------------
// functions to insert and extract elements from an axi stream
// includes conversion to correct data type

template <typename T, int U, int TI, int TD>
T pop_stream(ap_axiu <sizeof(T)*8, U, TI, TD> const &e)
{
#pragma HLS INLINE

	assert(sizeof(T) == 4);
	union
	{
		int ival;
		T oval;
	} converter;
	converter.ival = e.data;
	T ret = converter.oval;

	volatile ap_uint<sizeof(T)> strb = e.strb;
	volatile ap_uint<sizeof(T)> keep = e.keep;
	volatile ap_uint<U> user = e.user;
	volatile ap_uint<1> last = e.last;
	volatile ap_uint<TI> id = e.id;
	volatile ap_uint<TD> dest = e.dest;

	return ret;
}

template <typename T, int U, int TI, int TD>
ap_axiu <sizeof(T)*8, U, TI, TD> push_stream(T const &v, bool last = false)
{
#pragma HLS INLINE
	ap_axiu <sizeof(T)*8, U, TI, TD> e;

	assert (sizeof(T) == 4);
	union
	{
		int oval;
		T ival;
	} converter;
	converter.ival = v;
	e.data = converter.oval;

	// set it to sizeof(T) ones
	e.strb = -1;
	e.keep = 0xF; //e.strb;
	e.user = 0;
	e.last = last ? 1 : 0;
	e.id = 0;
	e.dest = 0;
	return e;
}

#endif
