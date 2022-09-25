/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:55:24 by ftegan            #+#    #+#             */
/*   Updated: 2022/03/03 14:55:42 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	if (!s)
		return (NULL);
	while (s[j])
		j++;
	i = 0;
	while (i <= j)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin_for_gnl(char *s1, char *s2)
{
	char	*pp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s2 || !s1)
		return (NULL);
	pp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (pp == NULL)
		return (NULL);
	while (s1[i])
		pp[j++] = s1[i++];
	i = 0;
	while (s2[i])
		pp[j++] = s2[i++];
	pp[j] = '\0';
	free(s1);
	return (pp);
}
