/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:17 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 15:42:06 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0) {
	this->_name = "Not assigned";
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& instance) {
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& instance) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &instance) {
		return *this;
	}
	this->_name = instance.getName();
	this->_hit_points = instance.getHP();
	this->_energy_points = instance.getEnergy();
	this->_attack_damage = instance.getDamage();
	return *this;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setHP(int hp) {
	this->_hit_points = hp;
}

void ClapTrap::setDamage(int damage) {
	this->_attack_damage = damage;
}

void ClapTrap::setEnergy(int energy) {
	this->_energy_points = energy;
}

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getHP() const {
	return this->_hit_points;
}

int ClapTrap::getEnergy() const {
	return this->_energy_points;
}

int ClapTrap::getDamage() const {
	return this->_attack_damage;
}

void ClapTrap::attack(std::string const& target) {
	if (this->_hit_points <= 0) {
		std::cout 
		<< "ClapTrap " 
		<< this->_name 
		<< " can’t attack, because his hit points are zero." 
		<< std::endl;
		return;
	}
	if (this->_energy_points <= 0) {
		std::cout
		<< "ClapTrap "
		<< this->_name <<
		" can’t attack, because his energy points are zero."
		<< std::endl;
		return;
	}
	std::cout 
	<< "ClapTrap " 
	<< this->_name 
	<< " attacks " 
	<< target 
	<< ", causing "
	<< this->_attack_damage 
	<< " points of damage!" 
	<< std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << getName() << " took " << amount << " points of damage! ";
	if ((int)amount > getHP()){
		std::cout << "ClapTrap " << getName() << " lost all hit points." << std::endl;
		this->_hit_points = 0;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << getName() << " have " << this->_hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_points <= 0) {
		std::cout 
		<< "ClapTrap " 
		<< this->_name 
		<< " can’t be repaired, because his hit points are zero." 
		<< std::endl;
		return;
	}
	if (this->_energy_points <= 0) {
		std::cout
		<< "ClapTrap "
		<< this->_name <<
		" can’t be repaired, because his energy points are zero."
		<< std::endl;
		return;
	}
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout 
	<< "ClapTrap "
	<< this->_name 
	<< " has been repaired with " 
	<< amount 
	<< " heal points! "
	<< std::endl
	<< "ClapTrap "
	<< this->_name
	<< " now have " 
	<< this->_hit_points 
	<< " hit points." 
	<< std::endl;
}
