/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:00:05 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:30:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char	*free_doub(char **paths)
{
	size_t	i;

	if (paths)
	{
		i = 0;
		while (paths[i])
			free(paths[i++]);
		free(paths);
	}
	return (NULL);
}
