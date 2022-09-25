/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:01:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 22:37:56 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout <<"a = " << a << std::endl;
	std::cout <<"b = " << b << std::endl;

	bool rez = a == b;
	std::cout << "a == b : \t"<< rez << std::endl;
	rez = a != b;
	std::cout << "a != b : \t" << rez << std::endl;
	rez = a > b;
	std::cout << "a > b : \t" << rez << std::endl;
	a = 6.6f;
	std::cout <<"a = \t\t" << a << std::endl;
	std::cout <<"b = \t\t" << b << std::endl;
	rez = a == b;
	std::cout << "a == b : \t" << rez << std::endl;

	Fixed c = a + b;
	std::cout << "a + b : \t" << c << std::endl;
	c = a - b;
	std::cout << "a - b : \t" << c << std::endl;

	c = a * b;
	std::cout << "a * b : \t" << c << std::endl;
	c = a / b;
	std::cout << "a / b : \t" << c << std::endl;

	a = 6;
	std::cout << "a : \t" << a << std::endl;
	std::cout << "++a: \t" << ++a << std::endl;

	std::cout << "a : \t" << a << std::endl;
	std::cout << "a++: \t" << a++ << std::endl;
	std::cout << "a : \t" << a << std::endl;

	Fixed const k(2.3f);
	std::cout << "a = " << a << " b = " << b << " k = " << k <<std::endl;
	std::cout << "max(k,b): \t" << Fixed::max( k, b ) << std::endl;
	std::cout << "min(a,b): \t" << Fixed::min( a, b ) << std::endl;
	return 0;
}
