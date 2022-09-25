/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:14 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/05 16:06:28 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

# include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& instance);
    ClapTrap& operator=(const ClapTrap& instance);

	std::string getName() const;
	int 		getHP() const;
	int 		getEnergy() const;
	int 		getDamage() const;

	void 	setName(std::string name);
	void 	setHP(int point);
	void 	setEnergy(int energy);
	void 	setDamage(int damage);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string	_name;
    int			_hit_points;
    int			_energy_points;
    int			_attack_damage;
};

#endif