/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:45:03 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 23:47:08 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown"){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& instance){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& instance){
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->_type = instance.getType();
	return *this;
}

std::ostream& operator<< (std::ostream &out, const WrongAnimal &WrongAnimal){
	out << WrongAnimal.getType();
	return out;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}

void WrongAnimal::makeSound() const{
	std::cout << "wrong" << std::endl;
}
