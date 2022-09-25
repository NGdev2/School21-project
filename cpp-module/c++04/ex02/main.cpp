/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:27:17 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 18:07:29 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// AAnimal *ab = new AAnimal();
	// ab->makeSound();
	std::cout <<"---------Create one Dog---------" << std::endl;
	const AAnimal* j = new Dog();
	std::cout << "---------Create one Cat---------" << std::endl;
	const AAnimal* i = new Cat();
	std::cout << "---------Create copy Cat---------" << std::endl;
	const AAnimal* copy_i = new Cat(*(Cat*)i); // создание копии кота

	std::cout << "---------Delete copy Cat!--------" << std::endl;
	delete copy_i;
	std::cout << "---------Delete Dog!------------" << std::endl;
	delete j; //should not create a leak
	std::cout << "---------Delete Cat!------------" << std::endl;
	delete i;
}