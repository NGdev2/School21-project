/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:32 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 17:43:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
	{
		Bureaucrat f1("Eloriahna", 135); // все подписывает и выполняет. 140 - подпишет но не выполнит. 150 - не подпишет и не выполнит
		ShrubberyCreationForm form_sh("home"); // 145-sign, 137-exec
		std::cout << form_sh << std::endl;
		f1.signForm(form_sh); // подписать shrubbery
		std::cout << std::endl << form_sh << std::endl;
		try
		{
			form_sh.execute(f1);
		}
		catch (const char * er)
		{
			std::cout << er << std::endl;
		}
		catch (std::exception & ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "-------------------------------------------" << std::endl;
	{
		Bureaucrat f2("Mala", 40);
		RobotomyRequestForm form_rob("Roba");//72- sign, 45 -exec
		f2.signForm(form_rob);
		std::cout << std::endl << form_rob << std::endl;
		try
		{
			form_rob.execute(f2);
		}
		catch (const char * er)
		{
			std::cout << er << std::endl;
		}
		catch (std::exception & ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------" << std::endl << std::endl;
	{
		Bureaucrat f3("Evie", 30);
		PresidentialPardonForm form_pres("Chelovek");//25- sign, 5 -exec
		f3.signForm(form_pres);
		std::cout << std::endl << form_pres << std::endl;
		try
		{
			form_pres.execute(f3);
		}
		catch (const char * er)
		{
			std::cout << er << std::endl;
		}
		catch (std::exception & ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "------------------------------------------" << std::endl;
	{
		Bureaucrat f4("Melitiel", 1);
		PresidentialPardonForm form_pres2("Chelovek");//25- sign, 5 -exec
		f4.signForm(form_pres2);
		f4.executeForm(form_pres2);
	}
}