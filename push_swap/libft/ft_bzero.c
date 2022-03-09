/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:18:25 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 01:09:59 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *memptr, size_t num)
{
	size_t	i;
	char	*p;

	p = memptr;
	i = 0;
	while (i < num)
	{
		p[i] = '\0';
		i++;
	}
}