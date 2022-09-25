/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:52:06 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 23:23:04 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_win(t_so_long	*game)
{
	ft_putendl_fd(\
	"(☞ຈل͜ຈ)☞ FLAMBOYANT!!!!! \n		(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧\nYOU ᕦ(ò_óˇ)ᕤ WIN!", 1);
	free_doub(game->map);
	ft_destroy_win(game);
	free(game);
	exit(1);
}

void	ft_lose(t_so_long	*game)
{
	ft_putendl_fd("YOU LOSE!!!!! \n		ಥ_ಥ\nHow it's happens?", 1);
	free_doub(game->map);
	free(game);
	exit(1);
}

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
