#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

namespace{
	template<typename N>
	void swap(N &a, N &b){
		N tmp = a;
		a = b;
		b = tmp;
	}

	template<typename N>
	N min(N a, N b){
		return (a < b) ? a : b;
	}

	template<typename N>
	N max(N a, N b){
		return (a > b) ? a : b;
	}
}

#endif