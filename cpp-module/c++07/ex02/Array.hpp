#ifndef __ITER__H__
#define __ITER__H__

#include <iostream>

#include <iostream>

template <typename T>
class Array
{
private:
	T				*_arr;
	unsigned int	_size;
public:
	Array(): _arr(new T(0)), _size(0){};
	Array( unsigned int n ): _arr(new T[n]()), _size(n){};
	Array( const Array &src ) { *this = src; };
	~Array(){ delete this->_arr; };

	class OutofBounds: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Array Exception: the index is out of bounds");
		}
	};

	Array &operator = ( const Array & rhs )
	{
		if (this == &rhs)
			return (*this);
		this->_size = rhs._size;
		this->_arr = new T[this->_size]();
		for (size_t i = 0; i < this->_size; i++)
			this->_arr[i] = rhs._arr[i];
		return (*this);
	};

	T &operator[]( unsigned int n )
	{
		if (n > this->_size)
			throw Array::OutofBounds();
		return (this->_arr[n]);
	};

	const T &operator[]( unsigned int n ) const
	{
		if (n > this->_size)
			throw Array::OutofBounds();
		return (this->_arr[n]);
	};

	unsigned int size() const { return (this->_size); };
};

#endif  //!__ITER__H__