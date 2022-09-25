/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:36:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 14:43:19 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL__H__
#define __AANIMAL__H__

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string	_type;

public:
	AAnimal();
	virtual ~AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal & copy);

	AAnimal &operator= (const AAnimal& other);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

std::ostream& operator<< (std::ostream &out, const AAnimal &animal);


#endif