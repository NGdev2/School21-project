/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:27:17 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 00:08:40 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound! j->makeSound();
	// j->makeSound();
	// meta->makeSound();
	// return 0;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << "Type Dog: " << j->getType() << " " << std::endl;
	std::cout << "Type Cat: " << i->getType() << " " << std::endl;
	std::cout << "Type WrongCat: " << k->getType() << " " << std::endl << std::endl;

	std::cout << "myDog: ";
	j->makeSound();

	std::cout << "myCat: ";
	i->makeSound();

	std::cout << "myWrongCat: ";
	k->makeSound();

	std::cout << "myMetaClass: ";
	meta->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
	delete k;
	delete meta;
}