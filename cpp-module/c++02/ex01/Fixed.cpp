/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:29:15 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 19:35:33 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_nb(0){ std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int nb){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_nb = nb << this->_fractional_bits;
}

Fixed::Fixed(const float nb){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_nb = (int)std::round(nb * (float)(1 << this->_fractional_bits));
}


Fixed::~Fixed(){std::cout << "Destructor called" << std::endl; }

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

float Fixed::toFloat( void ) const{
	return (this->_fixed_point_nb / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt( void ) const{
	return(this->_fixed_point_nb >> this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed& instance){
	out << instance.toFloat();
	return (out);
}
