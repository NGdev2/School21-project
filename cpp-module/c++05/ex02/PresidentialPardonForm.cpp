/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:36:57 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 16:16:28 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : Form(copy), _target(copy._target) {
	(*this) = copy;
}
PresidentialPardonForm &  PresidentialPardonForm::operator= (const PresidentialPardonForm & copy) {
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void PresidentialPardonForm::executeAction() const {
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}