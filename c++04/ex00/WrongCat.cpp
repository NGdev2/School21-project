/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:51:30 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 00:05:53 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& instance){
	std::cout << "WrongCat copy assignment operator is called" << std::endl;
	this->_type = instance.getType();
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Kar-kar" << std::endl;
}