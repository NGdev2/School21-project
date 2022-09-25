/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:57:35 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 14:57:53 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap defClap;
    ClapTrap withName("Denim");
    ClapTrap Copy(withName);

    withName.attack("Hammer");
    withName.takeDamage(7);
    withName.takeDamage(5);
    withName.beRepaired(8);
    Copy.attack("Hummer");
    Copy.takeDamage(9);
    Copy.beRepaired(8);
	Copy.attack("Stone");
	Copy.takeDamage(5);

    return (0);
}