#ifndef __HEADER__H__
#define __HEADER__H__

#include <iostream>
# include "Contact.hpp"
# include "PhoneBook.hpp"
# include "exit_code.hpp"

# define MAX_CONTACT_COUNT 8

# define RED    "\033[01;31m"
# define GREEN  "\033[04;32m"
# define OFF    "\033[00m"

void show_available_commands(bool welcome_msg);
void execute_command(PhoneBook *phonebook);

#endif
