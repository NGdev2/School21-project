/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:32 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/21 18:47:42 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat me("Zhun", 20);

	Intern a;
	Form * f = a.makeForm("robotomy form", "kawabanga"); // стажер создал новую форму robotomy
	Form * f2 = a.makeForm("shrubbery form", "kachaa"); // стажер создал новую форму shrubbery

	std:: cout << *f << std::endl; //далее тут проверяем просто что реально она существует
	std:: cout << *f2 << std::endl;

	delete f2;

	me.signForm(*f);
	try
	{
		f->execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete f;
}