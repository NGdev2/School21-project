/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:44:09 by ftegan            #+#    #+#             */
/*   Updated: 2022/08/18 14:31:24 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__H__
#define __WEAPON__H__

# include <iostream>

class Weapon
{
private:
	std::string _weapon;
	
public:
	Weapon(std::string name);
	~Weapon();
	std::string getType( void);
	void setType(std::string name);
};

#endif