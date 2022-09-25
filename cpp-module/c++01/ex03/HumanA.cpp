/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:44:57 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 15:06:18 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &humanA_weapon) : _humanA_weapon(humanA_weapon), _name(name){}

HumanA::~HumanA(){}

const std::string HumanA::getName( void ){
	return this->_name;
}

void HumanA::attack(){
	std::cout << this->getName() << " attacks with their " << this->_humanA_weapon.getType() << std::endl;
}
