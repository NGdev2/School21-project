/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:55:56 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/17 19:25:22 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	if (c > 256)
		c -= 256;
	while (s[j])
		j++;
	i = 0;
	while (i <= j)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
