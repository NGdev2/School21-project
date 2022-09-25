/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:01:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/24 00:01:37 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(3, -3);
	Point b(5,5);
	Point c(7, -3);
	Point point(5, -3);
	
	std::cout << bsp(a,b,c,point) << std::endl;
}
