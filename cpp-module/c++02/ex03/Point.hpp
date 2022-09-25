/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:42:01 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/23 23:57:37 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT__H__
#define __POINT__H__

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;

public:
	Point( void );
	~Point( void );
	Point(Point const & instance);
	Point & operator=(Point const & instance);

	Point(const float x, const float y);

	Fixed getX( void ) const;
	Fixed getY( void ) const;
};

int check(Point const a, Point const b, Point const point);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif