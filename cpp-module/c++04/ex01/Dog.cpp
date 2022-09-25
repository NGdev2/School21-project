/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:29:20 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 13:37:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default dog constructor called" << std::endl;
	_DogBrain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete _DogBrain;
}

Dog::Dog(const Dog& copy){
	std::cout << "Dog copy constructor called" << std::endl;
	_DogBrain = new Brain();
	*this = copy;
}

Dog& Dog::operator=(const Dog& instance){
	std::cout << "Dog copy assignment operator is called" << std::endl;
	if (this->_DogBrain){
		delete _DogBrain;
	}
	this->_DogBrain = new Brain(*instance._DogBrain);
	this->_type = instance.getType();
	return *this;
}

void Dog::makeSound() const{
	std::cout << "puppy woof-woof" << std::endl;
}