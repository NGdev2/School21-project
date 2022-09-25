/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:29:23 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 23:38:02 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__H__
#define __DOG__H__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog & copy);

	Dog& operator=(const Dog& other);
	void makeSound() const;
};

#endif