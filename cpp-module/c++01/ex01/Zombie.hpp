/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:02:25 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 21:57:52 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce( void );
	std::string get_name( void );
	void set_name( std::string name );
	static int get_countOfInfected( void );
	

private:
	std::string _name;	
	static int countOfInfected;
};

Zombie*    zombieHorde( int N, std::string name );

#endif