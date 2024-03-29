/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:32 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 18:30:12 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

    Bureaucrat *b = new Bureaucrat("Denim", 1);
    Bureaucrat *new_b = new Bureaucrat("NewDenim", 150);

    try {
        Bureaucrat *wrong_b = new Bureaucrat("WrongDenim", 1200);
        std::cout << *wrong_b << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << *b << std::endl;
    std::cout << *new_b << std::endl;

    try {
        b->incrementGrade();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        new_b->decrementGrade();
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    b->decrementGrade();
    std::cout << *b << std::endl;

    delete b;
    delete new_b;
}