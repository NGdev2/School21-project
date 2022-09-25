/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:21:06 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/21 18:32:36 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::makeForm(std::string name, std::string target) {
	std::string 	arrForm[3] = {"shrubbery form", "robotomy form", "presidential form"};
	int i;
	
	for (i = 0; i < 3 && arrForm[i] != name; i++) {}
	switch (i)
	{
		case 0:
			std::cout <<  "Intern creates <" << name << ">" << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			std::cout <<  "Intern creates <" << name << ">" << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			std::cout <<  "Intern creates <" << name << ">" << std::endl;
			return (new PresidentialPardonForm(target));
			break;
	default:
		std::cout << "Intern cannot create form" << std::endl;
		return NULL;
		break;
	}
}