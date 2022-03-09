/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:57:59 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/20 01:19:54 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lenst;

	i = 0;
	lendst = ft_strlen(dst);
	i = lendst;
	j = 0;
	lenst = ft_strlen(src);
	if (size == 0)
		return (lenst);
	if (src == NULL && dst == NULL)
		return (0);
	if (size > lendst)
	{
		while (i < size - 1 && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (lendst + lenst);
	}
	else
		return (lenst + size);
}
