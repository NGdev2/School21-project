/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:23:07 by ftegan            #+#    #+#             */
/*   Updated: 2022/09/06 14:22:43 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__H__
#define __BRAIN__H__

#include <iostream>
#include <string>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& copy);
	Brain& operator=(const Brain& instance);
	
};

#endif