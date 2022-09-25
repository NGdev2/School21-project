/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:37:51 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 15:49:08 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__HPP__
#define __PHONEBOOK__HPP__

# include "header.hpp"

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    int add_contact(void);
    int search_contact(void);
	int	show_contacts(void);

	int	check_contact_overflow(void);
	Contact *get_contact();

private:
	Contact contact_list[8];
    int contact_count;
    int curr_contact_nb;
};

#endif