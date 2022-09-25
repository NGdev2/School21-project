/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:35:48 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 15:53:34 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__H__
#define __ROBOTOMYREQUESTFORM__H__

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(){};
	RobotomyRequestForm(const RobotomyRequestForm & copy);
	RobotomyRequestForm & operator= (const RobotomyRequestForm & copy);

	// void execute(Bureaucrat const & executor) const;
	void executeAction() const;
};

#endif