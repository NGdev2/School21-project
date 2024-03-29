/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:01:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 22:31:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &brain;
	
	std::string &stringREF = brain;

	std::cout << "The memory address of the string variable: " << &brain << std::endl;

	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;

	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;


	std::cout << "The value of the string variable: " << brain << std::endl;
	
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	
	return 0;
}
