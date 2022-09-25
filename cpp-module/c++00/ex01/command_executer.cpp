#include "header.hpp"

void show_available_commands(bool welcome_msg)
{
	if (welcome_msg){
		std::cout << "You're open the app \"PhoneBook\"\n";
	}
	std::cout << "You can write one of next command" << std::endl;
	std::cout << "1) " << GREEN << "ADD:" << OFF << " save a new contact" << std::endl;
	std::cout << "2) " << GREEN << "SEARCH:" << OFF << " display a specific contact" << std::endl;
	std::cout << "3) " << GREEN << "EXIT:" << OFF << " The program quits" << std::endl;
}

void execute_command(PhoneBook *phonebook)
{
	std::string command;

	std::getline(std::cin, command);
	if (std::cin.eof() == 1){
		std::cout << std::endl;
		exit(TERMINATE);
	}

	if (command == "ADD"){
		phonebook->add_contact();
	}
	else if (command == "SEARCH"){
		if (phonebook->show_contacts() != 0)
		{
			phonebook->search_contact();
		}
	}
	else if(command == "EXIT"){
		std::cout << "Good bye😥" << std::endl;
		exit(EXIT_COMMAND);
	}
	else{
		std::cout << "Is it something in Elvish?" << std::endl;
	}
}
