/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:53:16 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/14 14:40:31 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*text;
	unsigned const char	*text2;

	text = dest;
	text2 = src;
	i = 0;
	if (text == NULL && text2 == NULL)
		return (0);
	while (i < n)
	{
		text[i] = text2[i];
		i++;
	}
	return (dest);
}
