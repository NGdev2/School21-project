/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:44:12 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 14:31:26 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
	this->setType(weapon);
}

Weapon::~Weapon(){}

std::string Weapon::getType(){
	return this->_weapon;
}

void Weapon::setType(std::string weapon){
	this->_weapon = weapon;
}

