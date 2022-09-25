/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:35:45 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 22:45:34 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("robotomy form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : Form(copy), _target(copy._target) {
	(*this) = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy desctructor is called." << std::endl;
};

RobotomyRequestForm &  RobotomyRequestForm::operator= (const RobotomyRequestForm & copy) {
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::executeAction() const {
	std::cout << "..Drrrr....Drrr....Bz..Bz..." << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}