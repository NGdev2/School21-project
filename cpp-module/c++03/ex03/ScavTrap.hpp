/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:15:05 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 17:38:57 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
protected:
	int	_energy_points;
public:
	ScavTrap();
	~ScavTrap();

	ScavTrap(std::string name);

	ScavTrap(ScavTrap& instance);
	ScavTrap& operator=(ScavTrap& instance);

	void	guardGate();
	void	attack(const std::string& target);
};

std::ostream& operator<< (std::ostream &out, const ScavTrap &st);

#endif