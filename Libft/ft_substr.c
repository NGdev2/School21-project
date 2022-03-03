/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:06:31 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/20 00:57:53 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pp;
	size_t	i;
	size_t	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		pp = malloc(sizeof(char));
		pp[0] = '\0';
		return (pp);
	}
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	pp = malloc((len + 1) * sizeof(char));
	if (pp == NULL)
		return (NULL);
	i = start;
	while (s[i] && j < len)
		pp[j++] = s[i++];
	pp[j] = '\0';
	return (pp);
}
