/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:37:44 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 22:38:32 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_xpm_init(t_so_long	*game)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	game->background = mlx_xpm_file_to_image(game->mlx, IMG_BACKGROUND, &w, &h);
	game->floor = mlx_xpm_file_to_image(game->mlx, IMG_FLOOR, &w, &h);
	game->player = mlx_xpm_file_to_image(game->mlx, IMG_PLAYER1, &w, &h);
	game->coin = mlx_xpm_file_to_image(game->mlx, IMG_COIN, &w, &h);
	game->wall = mlx_xpm_file_to_image(game->mlx, IMG_WALL, &w, &h);
	game->exit = mlx_xpm_file_to_image(game->mlx, IMG_EXIT, &w, &h);
}

void	ft_mlx_init(t_so_long	*game)
{
	mlx_get_screen_size(game->mlx, &game->screen_width, &game->screen_height);
	if (game->screen_width / IMG_SIZE <= game->len_line || \
	game->screen_height / IMG_SIZE <= game->lines)
		ft_exit(ERROR_MAP_SIZE, game);
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, game->screen_width, \
	game->screen_height, "WITCHER");
	ft_xpm_init(game);
	game->max_wcube = game->screen_width / IMG_SIZE;
	game->max_hcube = game->screen_height / IMG_SIZE;
	game->j = 0;
	while (game->j <= game->max_hcube)
	{
		game->i = 0;
		while (game->i <= game->max_wcube)
		{
			mlx_put_image_to_window(game->mlx, game->window, \
			game->background, game->i * IMG_SIZE, game->j * IMG_SIZE);
			game->i++;
		}
		game->j++;
	}
}
