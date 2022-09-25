/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:05:51 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 17:59:00 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("defFragTrap"){
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->setHP(100);
    this->setEnergy(100);
    this->setDamage(30);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called " << this->getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap Constructor called " << name << std::endl;
	this->setHP(100);
    this->setEnergy(100);
    this->setDamage(30);
}

FragTrap::FragTrap(FragTrap &instance){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	(*this) = instance;
}

FragTrap & FragTrap::operator= (FragTrap& instance){
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->setName(instance.getName());
	this->setHP(instance.getHP());
	this->setEnergy(instance.getEnergy());
	this->setDamage(instance.getDamage());
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const FragTrap &st){
	out << "name: " << st.getName() << "\nhit points: " << st.getHP() << "\nenergy points: " << st.getEnergy() << "\nattack damage:" << st.getDamage() << std::endl;
	return (out);
}

void FragTrap::highFivesGuys(void){
	std::cout << this->getName() << " give high fives!" << std::endl;
}