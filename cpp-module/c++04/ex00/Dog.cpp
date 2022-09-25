/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:29:20 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 23:16:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& copy){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& instance){
	std::cout << "Dog copy assignment operator is called" << std::endl;
	this->_type = instance.getType();
	return *this;
}

void Dog::makeSound() const{
	std::cout << "puppy woof-woof" << std::endl;
}