/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:06:02 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 17:26:21 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{
protected:
    int			_hit_points;
    int			_attack_damage;
public:
	FragTrap();
	~FragTrap();

	FragTrap(std::string name);

	FragTrap(FragTrap& instance);
	FragTrap & operator= (FragTrap& instance);

	void highFivesGuys(void);
};



#endif