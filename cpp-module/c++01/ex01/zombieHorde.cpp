/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:31:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/17 21:49:12 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){
	
	Zombie *horde;
	
	horde  = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].set_name(name);
	}
	
	return (horde);
}
