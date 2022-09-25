#ifndef __WHATEVER__H__
#define __WHATEVER__H__

# include <iostream>

template< typename Type >
void swap(Type  & a, Type & b){
	Type tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template< typename Type >
Type const & min(Type const & a, Type const & b) {
	return (a < b? a : b);
}

template< typename Type >
Type const & max( Type const & a, Type const & b) {
	return (a>b ? a : b);
}

#endif  //!__WHATEVER__H__