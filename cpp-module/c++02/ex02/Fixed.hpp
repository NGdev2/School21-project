/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:29:24 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 22:02:29 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixed_point_nb;
	static const int _fractional_bits = 8;
public:
	Fixed();
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();
	Fixed(const Fixed&);

	static const Fixed& max(const Fixed& a, const Fixed& b );
	static const Fixed& min(const Fixed& a, const Fixed& b );
	static Fixed& max(Fixed& a, Fixed& b );
	static Fixed& min(Fixed& a, Fixed& b );

	bool operator== (const Fixed & instance);
	bool operator!= (const Fixed & instance);
	bool operator> (const Fixed & instance);
	bool operator< (const Fixed & instance);
	bool operator>= (const Fixed & instance);
	bool operator<= (const Fixed & instance);
	
	Fixed& operator=(const Fixed& instance);
	Fixed operator*(const Fixed& instance);
	Fixed operator/(const Fixed& instance);
	Fixed operator+(const Fixed& instance);
	Fixed operator-(const Fixed& instance);
	
	Fixed & operator++ ();
	Fixed operator++ (int);
	Fixed & operator-- ();
	Fixed operator-- (int);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& instance);

#endif