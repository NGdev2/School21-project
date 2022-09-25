/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:51:25 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 18:02:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__H__
#define __DIAMONDTRAP__H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	~DiamondTrap();

	DiamondTrap(std::string name);

	DiamondTrap(DiamondTrap& instance);
	DiamondTrap& operator= (DiamondTrap& instance);

	std::string getName() const;
	int 		getHP() const;
	int 		getEnergy() const;
	int 		getDamage() const;

	void		whoAmI();
	void		attack(std::string const& target);
};

std::ostream& operator<< (std::ostream &out, const DiamondTrap &st);


#endif