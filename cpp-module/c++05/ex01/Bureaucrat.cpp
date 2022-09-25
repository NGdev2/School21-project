/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:36 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 16:59:34 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Noname"), _grade(1) {
	std::cout << "Bureaucrat constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "Bureaucrat constructor with args is called" << std::endl;
	if (grade < 1){
        throw Bureaucrat::GradeTooHighException();
	}
    else if (grade > 150){
        throw Bureaucrat::GradeTooLowException();
	}
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	(*this) = copy;
}

std::string Bureaucrat::getName() const{
	return this->_name;
}
int Bureaucrat::getGrade() const{
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat& copy)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this == &copy){
		return (*this);
	}
	const_cast<std::string &>(this->_name) = copy.getName();
	this->_grade = copy._grade;
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The Grade Bureaucrat is too high! Max grade is 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The Grade Bureaucrat is too low! Min grade is 150.");
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << ex.what() << std::endl;;
	}
	catch (const char * ex)
	{
		std::cout << ex << std::endl;
	}
}