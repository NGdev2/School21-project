/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_free_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:46:47 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/18 01:02:16 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*split_free(char **paths)
{
	size_t	i;

	if (paths)
	{
		i = -1;
		while (paths[++i])
			free(paths[i]);
		free(paths[i]);
		free(paths);
	}
	return (NULL);
}
