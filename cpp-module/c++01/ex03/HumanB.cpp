/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:45:02 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 15:15:59 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_humanB_weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &humanB_weapon){
	this->_humanB_weapon = &humanB_weapon;
}
std::string HumanB::getName( void ){
	return this->_name;
}

void HumanB::attack(){
	std::cout << this->getName() << " attacks with their ";
	if (this->_humanB_weapon == NULL){
		std::cout << "**indefinite weapon**" << std::endl;
		return;
	}
	std::cout << this->_humanB_weapon->getType() << std::endl;
}
