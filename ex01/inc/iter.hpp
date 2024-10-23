#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int length, void (*func)(T const &))
{
	for (int i = 0; i < length; i++)
	{
		func(array[i]);
	}
}
template<typename T>
void print(T const &c)
{
	std::cout << c << std::endl;
}

#endif