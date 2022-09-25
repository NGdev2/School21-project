/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:35:37 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 13:33:24 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__H__
#define __CAT__H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_CatBrain;

public:
	Cat();
	virtual ~Cat();
	Cat(const Cat & copy);

	Cat& operator=(const Cat& other);
	void makeSound() const;
};

#endif