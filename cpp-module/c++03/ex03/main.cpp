/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:57:35 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 21:02:35 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap defClap;
    DiamondTrap withName("Denim");

    withName.attack("Hammer");
    withName.takeDamage(70);
    withName.takeDamage(50);
	std::cout << withName << std::endl;
    withName.beRepaired(80);
    defClap.whoAmI();
    withName.whoAmI();
	return (0);
}