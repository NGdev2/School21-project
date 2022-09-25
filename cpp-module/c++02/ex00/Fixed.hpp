/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:29:24 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 16:26:05 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>

class Fixed
{
private:
	int _fixed_point_nb;
	static const int _fractional_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed& instance);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};


#endif