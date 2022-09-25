/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_ext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:15:58 by ftegan            #+#    #+#             */
/*   Updated: 2022/04/29 14:52:21 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_checker_ext(int ac, char **av)
{
	int	name_len;

	if (ac != 2)
		ft_error(ERROR_ARG_COUNT);
	name_len = ft_strlen(av[1]);
	if (name_len-- < 5)
		ft_error(ERROR_ARG_COUNT);
	if (av[1][name_len] != 'r' || av[1][name_len - 1] != 'e' || \
	av[1][name_len - 2] != 'b' || av[1][name_len - 3] != '.')
		ft_error(ERROR_MAP_NAME);
}
