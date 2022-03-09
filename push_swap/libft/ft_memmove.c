/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:22:34 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 01:16:08 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*text;
	unsigned const char	*text2;

	text = dest;
	text2 = src;
	if (text == NULL && text2 == NULL)
		return (NULL);
	i = 0;
	if (text <= text2)
	{
		while (i < n)
		{
			text[i] = text2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			text[i] = text2[i];
	}
	return (dest);
}
