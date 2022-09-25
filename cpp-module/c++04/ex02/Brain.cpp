/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:22:59 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 13:27:45 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}


Brain::Brain(const Brain& copy){
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = copy;
}

Brain & Brain::operator= (const Brain& instance){
	for (int i = 0; i < 100; i++){
		ideas[i] = instance.ideas[i];
	}
	return (*this);
}