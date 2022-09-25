/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:44 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/16 17:04:37 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__H__
#define __FORM__H__

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string	const _name;
	bool 		_is_signed;
	int 		const _grade;
	int			_required_grade;
	
public:
	Form();
	Form(std::string const name, int const grade, const int required_grade);
	~Form();
	Form(const Form& instance);
	Form& operator=(const Form& instance);

	int getGrade() const;
	int getRequiredGrade() const;
	std::string getName() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat& bureaucrat);

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw(){
				return "Form grade is too low.";
			}
	};

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw(){
				return "Form grade is too high.";
			}
	};
};

std::ostream & operator<<(std::ostream &out, const Form &in);

#endif  //!__FORM__H__