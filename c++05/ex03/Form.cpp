/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 18:46:45 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Noname"), _sign(150){
    this->_is_signed = false;
    this->_exec = 150;
	std::cout << "Form constructor is called." << std::endl;
}

Form::Form(std::string name, const int sign, const int exec): _name(name), _sign(sign){
	std::cout << "Form constructor with args is called." << std::endl;
	if (sign <= 0 || exec <= 0)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
    this->_is_signed = false;
    this->_exec = exec;
}

Form::~Form(){
	std::cout << "Form desctructor is called." << std::endl;
}

int Form::getSign() const{
	return (this->_sign);
}

int Form::getExecGrade() const{
	return (this->_exec);
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
	if (bureaucrat.getGrade() <= this->getSign()){
		this->_is_signed = true;
		std::cout << "The Form " << this->getName() << " is signed" << std::endl;
	}
	else {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& instance): _name(instance.getName()), _sign(instance.getSign()){
	std::cout << "Form copy constructor called" << std::endl;
	this->_exec = instance.getExecGrade();
	this->_is_signed = instance.getIsSigned();
}

Form& Form::operator=(const Form& instance){
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this == &instance){
		return (*this);
	}
	const_cast<std::string &>(this->_name) = instance.getName();
	const_cast<int &>(this->_sign) = instance.getSign();
	this->_exec = instance.getExecGrade();
	this->_is_signed = instance.getIsSigned();
	return (*this);
}

void Form::setSign(const int sign){
	const_cast<int &>(this->_sign) = sign;
}
void Form::setExecGrade(const int grade){
	this->_exec = grade;
}
void Form::setName(const std::string name){
	const_cast<std::string &>(this->_name) = name;
}
void Form::setIsSigned(const bool is_signed){
	this->_is_signed = is_signed;
}

void Form::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() && executor.getGrade() <= this->getExecGrade()) {
        this->executeAction();
    }
    else if (!this->getIsSigned())
        throw Form::NotSignedException();
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & out, const Form & in){
	out << "\nName: " << in.getName() << "\nIs signed: " << in.getIsSigned()
	<< "\nGrade: " << in.getSign() << "\nExecute grade: " <<in.getExecGrade() << std::endl;
	return out;
}