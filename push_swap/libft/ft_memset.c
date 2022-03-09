/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:22:41 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 01:17:13 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t n)
{
	size_t	i;
	char	*memd;

	memd = memptr;
	i = 0;
	while (i < n)
	{
		memd[i] = val;
		i++;
	}
	return (memptr);
}
