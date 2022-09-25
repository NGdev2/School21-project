/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:29:23 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 13:36:37 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__H__
#define __DOG__H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_DogBrain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog & copy);

	Dog& operator=(const Dog& other);
	void makeSound() const;
};

#endif