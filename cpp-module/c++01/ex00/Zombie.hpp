/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:02:25 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 21:27:19 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();

	void announce( void );
	std::string get_name( void );

private:
	std::string _name;	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif