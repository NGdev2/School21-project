/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:08:26 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/16 16:01:47 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

#ifndef __CONTACT__HPP__
#define __CONTACT__HPP__

class Contact
{
public:
    Contact(void);
    ~Contact(void);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
public:
    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nickname(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;

    void set_first_name(const std::string first_name) ;
    void set_last_name(const std::string last_name) ;
    void set_nickname(const std::string nickname) ;
    void set_phone_number(const std::string phone_number) ;
    void set_darkest_secret(const std::string darkest_secret) ;
};

#endif
