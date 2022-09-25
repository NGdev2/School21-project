/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:36:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 23:37:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__H__
#define __ANIMAL__H__

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;

public:
	Animal();
	virtual ~Animal();
	Animal(std::string type);
	Animal(const Animal & copy);

	Animal &operator= (const Animal& other);

	std::string getType() const;
	virtual void makeSound() const;
};

std::ostream& operator<< (std::ostream &out, const Animal &animal);


#endif