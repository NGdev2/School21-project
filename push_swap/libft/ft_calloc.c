/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:18:28 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/14 12:12:34 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		scale;
	char	*str;
	int		i;

	if (count == 0)
	{
		str = malloc (size);
		str[0] = '\0';
		return (str);
	}
	i = 0;
	scale = size * count;
	str = malloc (scale);
	if (str == NULL)
		return (NULL);
	while (i < scale)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
