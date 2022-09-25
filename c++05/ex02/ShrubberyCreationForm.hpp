/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:26:10 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 18:45:15 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__H__
#define __SHRUBBERYCREATIONFORM__H__

# include <iostream>
# include <fstream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& instance);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& instance);
	
	std::string getTarget() const;
	void executeAction() const;

private:
	std::string _target;
	ShrubberyCreationForm();
};

#endif