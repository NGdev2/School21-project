/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:56:37 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/16 20:27:30 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	const char	*ss1;
	const char	*ss2;

	ss1 = str1;
	ss2 = str2;
	i = 0;
	while (i < n && ((unsigned char)ss1[i] || (const char)ss2[i]))
	{
		if ((unsigned const char)ss1[i] != (unsigned const char)ss2[i])
			return ((unsigned const char)ss1[i] - (unsigned const char)ss2[i]);
		i++;
	}
	return (0);
}
