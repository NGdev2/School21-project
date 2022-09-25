/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/16 17:15:20 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Noname"), _grade(150){
    this->_is_signed = false;
    this->_required_grade = 150;
	std::cout << "Form constructor is called." << std::endl;
}

Form::Form(std::string name, const int grade, const int required_grade): _name(name), _grade(grade){
	std::cout << "Form constructor with args is called." << std::endl;
	if (grade <= 0 || required_grade <= 0)
		throw Form::GradeTooHighException();
	if (grade > 150 || required_grade > 150)
		throw Form::GradeTooLowException();
    this->_is_signed = false;
    this->_required_grade = required_grade;
	
}

Form::~Form(){
	std::cout << "Form desctructor is called." << std::endl;
}

int Form::getGrade() const{
	return (this->_grade);
}

int Form::getRequiredGrade() const{
	return (this->_required_grade);
}

std::string Form::getName() const{
	return (this->_name);
}
bool Form::getIsSigned() const{
	return (this->_is_signed);
}

void Form::beSigned(Bureaucrat& bureaucrat){
	if (this->_is_signed == true)
		throw "The Form already signed!";
	if (bureaucrat.getGrade() <= this->getGrade()){
		this->_is_signed = true;
	}
	else {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& instance): _name(instance.getName()), _grade(instance.getGrade()){
	std::cout << "Form copy constructor called" << std::endl;
	this->_required_grade = instance.getRequiredGrade();
	this->_is_signed = instance.getIsSigned();
}

Form& Form::operator=(const Form& instance){
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this == &instance){
		return (*this);
	}
	const_cast<std::string &>(this->_name) = instance.getName();
	const_cast<int &>(this->_grade) = instance.getGrade();
	this->_required_grade = instance.getRequiredGrade();
	this->_is_signed = instance.getIsSigned();
	return (*this);
}

std::ostream& operator<< (std::ostream &out, const Form &form){
	out << form.getName() << ", sign " << form.getIsSigned() << ", form grade " << form.getGrade()
	<< ", required grade " << form.getRequiredGrade() << std::endl;
	return out;
}