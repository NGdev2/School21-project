/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:22:19 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 01:16:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t		i;
	const char	*ss;

	ss = arr;
	i = 0;
	if (c > 256)
		c -= 256;
	while (i < n)
	{
		if (ss[i] == c)
			return ((char *)ss + i);
		i++;
	}
	return (0);
}
