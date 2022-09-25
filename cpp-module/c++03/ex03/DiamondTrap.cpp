/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:51:28 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 20:17:49 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(), _name("default"){ 
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_attack_damage = FragTrap::getDamage();
	this->_energy_points = ScavTrap::getEnergy();
	this->_hit_points = FragTrap::getHP();
	ClapTrap::setName("default_clap_name");
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap(), _name(name){ 
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_attack_damage = FragTrap::getDamage();
	this->_energy_points = ScavTrap::getEnergy();
	this->_hit_points = FragTrap::getHP();
	ClapTrap::setName(name + "_clap_name");
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& instance){
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	(*this) = instance;
}

DiamondTrap & DiamondTrap::operator= (DiamondTrap& instance){
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->setName(instance.getName());
	this->setHP(instance.getHP());
	this->setEnergy(instance.getEnergy());
	this->setDamage(instance.getDamage());
	return (*this);
}

void DiamondTrap::whoAmI(){
	std::cout << "I Am flamboyant Diamond trap" << this->getName() << "!!!" << std::endl;
	std::cout << "I Am amazing Clap trap" << ClapTrap::getName() << "!!!" << std::endl;
}

std::ostream& operator<< (std::ostream &out, const DiamondTrap &st){
	out << "name: " << st.getName() << "\nhit points: " << st.getHP() << "\nenergy points: " << st.getEnergy() << "\nattack damage:" << st.getDamage() << std::endl;
	return (out);
}

void DiamondTrap::attack(std::string const& target){
	std::cout << *this << std::endl;
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName() const{
	return this->_name;
}

int DiamondTrap::getHP() const{
	return this->_hit_points;
}

int DiamondTrap::getEnergy() const{
	return this->_energy_points;
}

int DiamondTrap::getDamage() const{
	return this->_attack_damage;
}
