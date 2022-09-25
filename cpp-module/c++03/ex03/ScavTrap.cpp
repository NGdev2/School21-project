/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:14:57 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 20:17:30 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("DefScavTrap"){
	std::cout << "ScavTrap Default constructor called" << std::endl;
    this->setHP(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap constructor called with name " << name << std::endl;
	this->setHP(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &instance){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	(*this) = instance;
}

ScavTrap & ScavTrap::operator= (ScavTrap & instance){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setName(instance.getName());
	this->setHP(instance.getHP());
	this->setEnergy(instance.getEnergy());
	this->setDamage(instance.getDamage());
	return (*this);
}

void ScavTrap::attack(std::string const & target){
	std::cout << *this << std::endl;
	std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getDamage() <<
	" points of damage!!!" <<std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
}

std::ostream& operator<< (std::ostream &out, const ScavTrap &st){
	out << "name: " << st.getName() << "\nhit points: " << st.getHP() << "\nenergy points: " << st.getEnergy() << "\nattack damage:" << st.getDamage() << std::endl;
	return (out);
}
