/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:59:39 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 16:20:21 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.hpp"

PhoneBook::PhoneBook(){
	this->contact_count = 0;
    this->curr_contact_nb = 0;
}

PhoneBook::~PhoneBook(){};

int value_output_handler(std::string value)
{
	const	std::string pattern = "          ";
	const	int value_len = value.length();
	
	if (value_len > 10){
		std::cout << value.substr(0, 9) << ".";
	}
	else{
		std::cout << pattern.substr(0, 10 - value_len) << value;
	}
	return 1;
}

int PhoneBook::add_contact()
{
	std::string new_contact[5];
	Contact *phoneBook_contact;
	std::string contact_info[] = {
			"First name: ",
			"Last name: ",
			"Nickname: ",
			"Phone number: ",
			"Darkest secret: "
	};
	if (this->check_contact_overflow() == 1){
		std::cout << "PhoneBook is already full." << OFF << std::endl;
		std::cout << "The oldest contact will be replace by the new contact." << std::endl;
		this->curr_contact_nb = 0;
	}
	phoneBook_contact = this->get_contact();
	std::cout << "For record new contact to PhoneBook need next information:" << std::endl;
	
	for (std::size_t i = 0; i < sizeof(contact_info) / sizeof(*contact_info); i++){
		std::cout << i + 1 << ") " << contact_info[i] << ": ";
		std::getline(std::cin, new_contact[i]);
		if (std::cin.eof() == 1){
			std::cout << std::endl;
			exit(TERMINATE);
		}
		if (new_contact[i].length() == 0){
			std::cout << "You need write a text. Empty string is not allowed" << std::endl;
			--i;
		}
	}
	
	phoneBook_contact->set_first_name(new_contact[0]);
	phoneBook_contact->set_last_name(new_contact[1]);
	phoneBook_contact->set_nickname(new_contact[2]);
	phoneBook_contact->set_phone_number(new_contact[3]);
	phoneBook_contact->set_darkest_secret(new_contact[4]);
	if (this->contact_count < MAX_CONTACT_COUNT){
        this->contact_count++;
	}
    this->curr_contact_nb++;

    return 1;
}

int	PhoneBook::show_contacts()
{
	std::string value;
	if (this->contact_count == 0){
		std::cout << "PhoneBook don't have any contact yet." << std::endl;
		std::cout << "Please add a contacts for the next work with PhoneBook\n" << std::endl;
		return 0;
	}
	std::cout << GREEN << "|  index   |first name| last name| nickname |" << OFF << std::endl;
	
	for (int i = 0; i < this->contact_count; i++){
		std::cout << "|";
		value = std::to_string(i);
		value_output_handler(value);
		
		std::cout << "|";
		
		value = this->contact_list[i].get_first_name();
		value_output_handler(value);

		std::cout << "|";

		value = this->contact_list[i].get_last_name();
		value_output_handler(value);
		
		std::cout << "|";
		
		value = this->contact_list[i].get_nickname();
		value_output_handler(value);
		std::cout << "|" << std::endl;
	}
	return 1;
}

int PhoneBook::search_contact()
{
	std::string index;
	int	int_index;
    std::cout << "Please enter the index of the searching contact" << std::endl;
	std::getline(std::cin, index);
	if (std::cin.eof() == 1){
		
        std::cout << RED << "CANCEL SEARCHING" << OFF << std::endl;
        return 0;
    }
	if (index.length() == 0){
		return 0;
	}
	for (std::size_t i = 0; i < index.length(); i++){
		if (!isdigit(index[i])){
			std::cout << RED << "You must enter a number" << OFF << std::endl;
			return 0;
		}
	}
	int_index = std::stoi(index);
	if (int_index < 0 || int_index > 8){
		std::cout << RED << "You must enter a number in the range from 0 to 8." << OFF << std::endl;
		return 0;
	}
	else if (int_index >= this->contact_count){
		std::cout << RED << "You must enter a index of an existing contact." << OFF << std::endl;
		return 0;
	}
	else{
		std::cout << "First name: " << this->contact_list[int_index].get_first_name() << std::endl;
		std::cout << "Last name: " << this->contact_list[int_index].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contact_list[int_index].get_nickname() << std::endl;
		std::cout << "Phone number: " << this->contact_list[int_index].get_phone_number() << std::endl;
		std::cout << "Darkest_secret: " << this->contact_list[int_index].get_darkest_secret() << std::endl << std::endl;
		return 1;
	}
}

int	PhoneBook::check_contact_overflow()
{
	if (this->curr_contact_nb >= MAX_CONTACT_COUNT){
		return 1;
	}
	return 0;
}

Contact *PhoneBook::get_contact()
{
	return (&this->contact_list[this->curr_contact_nb]);
}
