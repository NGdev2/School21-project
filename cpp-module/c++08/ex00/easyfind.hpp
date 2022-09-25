#ifndef __EASYFIND__H__
#define __EASYFIND__H__

# include <algorithm>
# include <iostream>

template <typename T> int easyfind(T& data, int num) {
	typename T::const_iterator it;
	it = std::find(data.begin(), data.end(), num);
	if (it == data.end()) {
		throw std::logic_error("Element not found!");
	}
	return *it;
}

#endif  //!__EASYFIND__H__