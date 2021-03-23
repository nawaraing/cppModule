#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template <typename T>
void iter(T *arr, size_t size, void (* func)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		func(arr[i]);
	}
}

#endif