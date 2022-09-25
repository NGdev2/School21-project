/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:02:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 21:28:32 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << "Constructor create zombie " << this->_name << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Destructor killed zombie " << this->_name << std::endl;
}

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
std::string Zombie::get_name( void ){
	return (this->_name);
}
