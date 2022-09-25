/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:44 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/20 18:46:56 by ftegan           ###   ########.fr       */
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
	int 		const _sign;
	int			_exec;

protected:
	void setSign(const int sign);
	void setExecGrade(const int grade);
	void setName(const std::string name);
	void setIsSigned(const bool is_signed);

public:
	Form();
	Form(std::string const name, int const sign, const int exec);
	virtual ~Form();
	Form(const Form& instance);
	Form& operator=(const Form& instance);

	int getSign() const;
	int getExecGrade() const;
	std::string getName() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat& bureaucrat);
	virtual void executeAction() const = 0;
	void execute(Bureaucrat const & executor) const;

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

	class NotSignedException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Form isn't signed. Sign form before execute.";
                }
        };
};

std::ostream & operator<<(std::ostream &out, const Form &in);

#endif