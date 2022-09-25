/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:34 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/16 16:33:23 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__H__
#define __BUREAUCRAT__H__

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	std::string	const _name;
	int 		_grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, int range);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat & copy);
	Bureaucrat & operator= (const Bureaucrat & copy);

	void incrementGrade();
	void decrementGrade();
	std::string getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException(){};
			virtual ~GradeTooHighException()  throw(){};

			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException(){};
			virtual ~GradeTooLowException()  throw(){};

			virtual const char* what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif