/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:30:36 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 23:49:54 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Unknown"){
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& instance){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = instance;
}

Animal& Animal::operator=(const Animal& instance){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->_type = instance.getType();
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Animal &animal){
	out << animal.getType();
	return out;
}

std::string Animal::getType() const{
	return this->_type;
}

void Animal::makeSound() const{
	std::cout << "sound of emptiness: ##shhhhhh##" << std::endl;
}
