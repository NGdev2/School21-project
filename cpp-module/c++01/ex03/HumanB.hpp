/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:45:04 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 14:17:14 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__H__
#define __HUMANB__H__

# include "iostream"
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void attack( void );
	std::string getName( void );
	void setWeapon(Weapon &humanB_weapon);
	
private:
	Weapon *_humanB_weapon;
	std::string _name;
};

// class HumanB
// {
// public:
// 	HumanB(std::string name);
// 	~HumanB();
// 	void attack( void );
// 	std::string getName( void );
	
// private:
// 	std::string _name;
// 	// Weapon _humanB_weapon;
// };


#endif