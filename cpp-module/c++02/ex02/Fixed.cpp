/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:29:15 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 22:01:46 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point_nb(0){ std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int nb){
	this->_fixed_point_nb = nb << this->_fractional_bits;
}

Fixed::Fixed(const float nb){
	this->_fixed_point_nb = (int)std::round(nb * (float)(1 << this->_fractional_bits));
}


Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& instance){
	*this = instance;
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

Fixed& Fixed::operator=(const Fixed& instance){
	this->_fixed_point_nb = instance.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(const Fixed & instance){
	Fixed result;
	
	long long nb;
	nb = (long)this->getRawBits() * (long)instance.getRawBits();
	result.setRawBits(nb >> this->_fractional_bits);
	return (result);
}

Fixed Fixed::operator+(const Fixed & instance){
	Fixed result;

	result.setRawBits(this->getRawBits() + instance.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed & instance){
	Fixed result;

	result.setRawBits(this->getRawBits() - instance.getRawBits());
	return (result);
}

Fixed Fixed::operator/(const Fixed & instance){
	Fixed result;
	
	long long nb;
	nb = this->getRawBits() << Fixed::_fractional_bits;
	
	result.setRawBits(nb / instance.getRawBits());
	return (result);
}


Fixed & Fixed::operator++(){
	this->_fixed_point_nb++;
	return (*this);
}

Fixed & Fixed::operator--(){
	this->_fixed_point_nb--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);

	this->_fixed_point_nb++;
	return (tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);

	this->_fixed_point_nb--;
	return (tmp);
}

bool Fixed::operator!=(const Fixed& instance){
	return (!(this->getRawBits() == instance.getRawBits()));
}

bool Fixed::operator>(const Fixed& instance){
	return (this->getRawBits() > instance.getRawBits());
}

bool Fixed::operator<(const Fixed& instance){
	return (this->getRawBits() < instance.getRawBits());
}

bool Fixed::operator>=(const Fixed& instance){
	return (this->getRawBits() >= instance.getRawBits());
}

bool Fixed::operator<=(const Fixed& instance){
	return (this->getRawBits() <= instance.getRawBits());
}

bool Fixed::operator==(const Fixed& instance){
	return (this->getRawBits() == instance.getRawBits());
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b ){
	if (a.getRawBits() >= b.getRawBits()){
		return a;
	}
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b ){
	if (a.getRawBits() >= b.getRawBits()){
		return b;
	}
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b ){
	if (a.getRawBits() >= b.getRawBits()){
		return a;
	}
	return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b ){
	if (a.getRawBits() >= b.getRawBits()){
		return b;
	}
	return a;
}

