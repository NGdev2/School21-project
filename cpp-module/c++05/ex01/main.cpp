/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:32 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/15 21:54:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    try
	{
		Bureaucrat a("buro", 1);
		Bureaucrat b(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "fst block" << std::endl << std::endl;

	try
	{
		Form b("morni", 0, 15); // FAIL
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	// std::cout << "second block" << std::endl << std::endl;

	// try
	// {
	// 	Form b("senti", 100, 151); // FAIL
	// 	std::cout << b << std::endl;
	// }
	// catch (std::exception & ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << "third block" << std::endl << std::endl;
	
	// try
	// {
	// 	Form b("casti", 100, 15); // FAIL
	// 	Bureaucrat b2("zoom", 101);
	// 	b.beSigned(b2);
	// 	std::cout << b << std::endl;
	// }
	// catch (std::exception & ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }

	// std::cout << "fourth block" << std::endl << std::endl;
	
	// try
	// {
	// 	Form b("costy", 100, 15); //
	// 	Bureaucrat b2("daki", 100);
	// 	b.beSigned(b2);
	// 	b.beSigned(b2); // второй раз уже не подписать!
	// 	std::cout << b << std::endl;
	// }
	// catch (std::exception & ex)
	// {
	// 	std::cout << ex.what() << std::endl;
	// }
	// catch (const char * ex)
	// {
	// 	std::cout << ex << std::endl;
	// }


	// std::cout << "fifth block" << std::endl << std::endl;
	
	// Form b("zerino", 100, 15); // нельзя подписать по рангу
	// Bureaucrat b2("won", 101);
	// b2.signForm(b);
	// std::cout << std::endl << b << std::endl;

	// std::cout << std::endl;
	// Form c("pufi", 100, 15); // подписываем
	// Bureaucrat c2("powfu", 100);
	// c2.signForm(c);
	// c2.signForm(c); // нельзя второй раз подписать
	// std::cout << std::endl << c << std::endl;

	// return (0);
}