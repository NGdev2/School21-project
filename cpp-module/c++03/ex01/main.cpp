/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:57:35 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 15:57:04 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap defClap;
	ScavTrap withName("Denim");
	ScavTrap Copy(withName);

	withName.attack("Hammer");
	withName.takeDamage(70);
	withName.takeDamage(50);
	withName.beRepaired(80);
	Copy.attack("Hummer");
	Copy.takeDamage(90);
	Copy.takeDamage(10);
	Copy.beRepaired(80);
	Copy.guardGate();

	return (0);
}