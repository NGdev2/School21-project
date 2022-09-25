/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:45:01 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 17:43:08 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__H__
#define __WRONGANIMAL__H__

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal & copy);

	WrongAnimal &operator= (const WrongAnimal& other);

	std::string getType() const;
	void makeSound() const;
};

std::ostream& operator<< (std::ostream &out, const WrongAnimal &wrong_animal);


#endif