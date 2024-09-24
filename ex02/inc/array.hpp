#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const &src) : _array(NULL), _size(0) { *this = src; }
		~Array() { delete[] _array; }

		Array &operator=(Array const &copy)
		{
			if (this != &copy)
			{
				delete[] _array;
				_size = copy._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = copy._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		}
		unsigned int size() const { return _size; }
};

#endif