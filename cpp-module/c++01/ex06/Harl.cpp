/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:45:22 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/19 22:41:53 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

	_funcArr [0] = &Harl::debug;
	_funcArr [1] = &Harl::info;
	_funcArr [2] = &Harl::warning;
	_funcArr [3] = &Harl::error;
}

Harl::~Harl(){}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}
void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level ){
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (level != levels[i] && ++i < 4){};
	
	switch (i)
	{
	case 0:{
		std::cout << "[ DEBUG ]" << std::endl;
		(this->*_funcArr[0])();
		std::cout << "\n";
	}
	case 1:{
		std::cout << "[ INFO ]" << std::endl;
		(this->*_funcArr[1])();
		std::cout << "\n";
	}
	case 2:{
		std::cout << "[ WARNING ]" << std::endl;
		(this->*_funcArr[2])();
		std::cout << "\n";
	}
	case 3:{
		std::cout << "[ ERROR ]" << std::endl;
		(this->*_funcArr[3])();
		std::cout << "\n";
		break;
	}
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
