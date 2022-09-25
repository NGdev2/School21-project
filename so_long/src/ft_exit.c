/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:52:06 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:22:32 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *er_msg)
{
	ft_putendl_fd(er_msg, 2);
	exit(1);
}

void	ft_exit(char *er_msg, t_so_long	*s_game)
{
	ft_putendl_fd(er_msg, 2);
	free_doub(s_game->map);
	free(s_game);
	exit(1);
}

int	ft_destroy_win(t_so_long	*game)
{
	mlx_destroy_window(game->mlx, game->window);
	exit(0);
}

void	ft_exit_no_free(char *er_msg, t_so_long	*s_game)
{
	ft_putendl_fd(er_msg, 2);
	free(s_game);
	exit(1);
}
