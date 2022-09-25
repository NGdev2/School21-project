/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:18:25 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 22:11:13 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **res_arr)
{
	unsigned int	i;

	i = 0;
	while (res_arr[i])
	{
		free(res_arr[i]);
		i++;
	}
	free(res_arr);
}

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i] && s[i + 1] != c)
				i++;
			word_count++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (word_count);
}

static void	che(char *s, int wc, char **res_arr, char c)
{
	int	i;
	int	j;
	int	word_len;
	int	k;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[i] && j < wc)
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		res_arr[j] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!res_arr[j])
			return (ft_free(res_arr));
		while (word_len)
			res_arr[j][k++] = s[i - word_len--];
		res_arr[j++][k] = '\0';
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res_arr;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	res_arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!(res_arr))
		return (NULL);
	che((char *)s, word_count, res_arr, c);
	res_arr[word_count] = NULL;
	return (res_arr);
}
