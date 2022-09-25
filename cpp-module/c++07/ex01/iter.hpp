#ifndef __ITER__H__
#define __ITER__H__

#include <iostream>

template< class Type>
void iter(Type *arr, int arrLen, void func(Type const &a))
{
	for(int i = 0; i < arrLen; i++)
		func(arr[i]);
}

template <typename Type>
void print(Type const &val)
{
	std::cout << val << std::endl;
}

#endif  //!__ITER__H__