/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:01:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 19:03:12 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s++, fd);
	}
}

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
