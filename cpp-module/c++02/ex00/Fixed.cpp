/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:29:15 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 16:34:46 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_nb(0){ std::cout << "The constructor is called" << std::endl; }

Fixed::~Fixed(){std::cout << "The destructor is called" << std::endl; }

Fixed::Fixed(const Fixed& instance){
	std::cout << "A copy constructor is called" << std::endl;
	*this = instance;
	}

Fixed& Fixed::operator=(const Fixed& instance){
	std::cout << "A copy assignment operator is called" << std::endl;
	this->_fixed_point_nb = instance.getRawBits();
	return (*this);
	}

void Fixed::setRawBits( int const raw ){
	this->_fixed_point_nb = raw;
};

int Fixed::getRawBits( void ) const{
	return (this->_fixed_point_nb);
}