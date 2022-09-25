/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:36:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 16:16:00 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__H__
#define __PRESIDENTIALPARDONFORM__H__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(){};
	PresidentialPardonForm(const PresidentialPardonForm & copy);
	PresidentialPardonForm & operator= (const PresidentialPardonForm & copy);

	void executeAction() const;
};

#endif