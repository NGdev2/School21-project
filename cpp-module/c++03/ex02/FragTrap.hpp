/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:06:02 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 16:24:50 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();

	FragTrap(std::string name);

	FragTrap(FragTrap& instance);
	FragTrap & operator= (FragTrap& instance);

	void highFivesGuys(void);
};



#endif