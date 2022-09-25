/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:38:00 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 15:50:25 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	PhoneBook phonebook;
	static bool greeting_flag;

	greeting_flag = true;
	
	while (true){
		show_available_commands(greeting_flag);
		if (greeting_flag){
			greeting_flag = false;
		}
		execute_command(&phonebook);
		
	}
	return 0;
}
