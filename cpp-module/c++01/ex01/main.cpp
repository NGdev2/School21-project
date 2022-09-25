/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:01:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 22:03:07 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	size_t horde_count = 10;
	Zombie *horde = zombieHorde(horde_count, "Buu");
	Zombie *order_zombie = horde;
	for (size_t i = 0; i < horde_count; i++){
		order_zombie->announce();
		order_zombie++;
	}
	delete[] horde;
	return 0;
}
