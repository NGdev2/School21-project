/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:01:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/01/06 14:56:17 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count1;
	size_t	count2;

	count1 = 0;
	count2 = 0;
	if (s2[0] == 0 || s2 == 0)
		return ((char *)s1);
	while (s1[count1] && count1 < n && s1[count1 + count2] && s2[count2])
	{
		while (s1[count1 + count2] == s2[count2] && s1[count1 + count2] \
		&& s2[count2] && (count2 + count1) < n)
		{
			count2++;
		}
		if (s2[count2] == 0)
			return ((char *)(s1 + count1));
		count1++;
		count2 = 0;
	}
	return (NULL);
}
