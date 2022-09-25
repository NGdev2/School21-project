/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:26:13 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 18:45:22 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery form", 145, 137), _target("NoTarget"){
	std::cout << "ShrubberyCreationForm default constructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery form", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm constructor with args is called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destructor is called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance){
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	this->setName(instance.getName());
	this->setExecGrade(instance.getExecGrade());
	this->setIsSigned(instance.getIsSigned());
	this->setSign(instance.getSign());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& instance){
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this == &instance){
		return (*this);
	}
	this->setName(instance.getName());
	this->setExecGrade(instance.getExecGrade());
	this->setIsSigned(instance.getIsSigned());
	this->setSign(instance.getSign());
	return (*this);
}


std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream file;
    file.open(this->getTarget() + "_shrubbery");

	// file << "           ._::_."               << std::endl;
    // file << "        ._// || \\\\_."         << std::endl;
    // file << "     __/ _ _/  \\_ _ \\__ "        << std::endl;
    // file << "  .-'  / / /    \\ \\ \\  '-.         "          << std::endl;
    // file << "//__ _/ /_/  /\\   \\_\\ \\_ __\\\\"                 << std::endl;
    // file << "           //  \\\\ "                 << std::endl;
    // file << "         //__  __\\\\"                << std::endl;
    // file << "            \\__/"               << std::endl;
	// file << "            |__|"               << std::endl;
	// file << "            |__|"               << std::endl;
	// file << "            |__|"               << std::endl;
    // file << "    ________\\__/_______"       << std::endl;
    // file << " _____________________________" << std::endl;

	file << "          .     .  .      +     .      .          ." << std::endl;
	file << "     .       .      .     #       .           ." << std::endl;
	file << "        .      .         ###            .      .      ." << std::endl;
	file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
	file << "          .      . \"####\"###\"####\"  ." << std::endl;
	file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
	file << "  .             \"#########\"#########\"        .        ." << std::endl;
	file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
	file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
	file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
	file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
	file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
	file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
	file << "            .     \"      000      \"    .     ." << std::endl;
	file << "       .         .   .   000     .        .       ." << std::endl;
	file << ".. .. ..................O000O........................ ......" << std::endl;


    file.close();
}
