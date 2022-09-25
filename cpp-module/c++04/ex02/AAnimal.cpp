/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:30:36 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 14:43:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Unknown"){
	std::cout << "Default animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type){
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& instance){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = instance;
}

AAnimal& AAnimal::operator=(const AAnimal& instance){
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->_type = instance.getType();
	return *this;
}

std::ostream& operator<< (std::ostream &out, const AAnimal &animal){
	out << animal.getType();
	return out;
}

std::string AAnimal::getType() const{
	return this->_type;
}

void AAnimal::makeSound() const{
	std::cout << "sound of emptiness: ##shhhhhh##" << std::endl;
}
