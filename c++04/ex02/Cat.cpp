/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:47:21 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 14:45:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Default cat constructor called" << std::endl;
	_CatBrain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete _CatBrain;
}

Cat::Cat(const Cat& copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	_CatBrain = new Brain();
	*this = copy;
}

Cat& Cat::operator=(const Cat& instance){
	std::cout << "Cat copy assignment operator is called" << std::endl;
	if (this->_CatBrain){
		delete _CatBrain;
	}
	this->_CatBrain = new Brain(*instance._CatBrain);
	this->_type = instance.getType();
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Demanding meow" << std::endl;
}