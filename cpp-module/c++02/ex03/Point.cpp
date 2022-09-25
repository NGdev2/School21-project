/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:41:34 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/24 00:04:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::~Point(){}

Point::Point(Point const &instance){
	*this = instance;
}

Point & Point::operator=(Point const &instance){
	this->_x = instance._x;
	this->_y = instance._y;
	return (*this);
}

Fixed Point::getX( void ) const{
	return (this->_x);
}
Fixed Point::getY( void ) const{
	return (this->_y);
}
