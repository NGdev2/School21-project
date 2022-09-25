/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:06:05 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 23:23:16 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	drow_map3(t_so_long	*game, int i, int j, int size)
{
	if (game->map[i][j] == 'E')
		mlx_put_image_to_window(game->mlx, game->window, \
		game->exit, (j + game->wshift) * size, (i + game->hshift) * size);
	else if (game->map[i][j] == 'C')
	{
		mlx_put_image_to_window(game->mlx, game->window, \
		game->floor, (j + game->wshift) * size, (i + game->hshift) * size);
		mlx_put_image_to_window(game->mlx, game->window, \
		game->coin, (j + game->wshift) * size, (i + game->hshift) * size);
	}
	else if (game->map[i][j] == KILLER)
	{
		mlx_put_image_to_window(game->mlx, game->window, \
		game->floor, (j + game->wshift) * size, (i + game->hshift) * size);
		mlx_put_image_to_window(game->mlx, game->window, \
		game->lkiller, (j + game->wshift) * size, (i + game->hshift) * size);
	}
}

void	drow_map2(t_so_long	*game, int i, int j, int size)
{
	if (game->map[i][j] == '1')
		mlx_put_image_to_window(game->mlx, game->window, \
		game->wall, (j + game->wshift) * size, (i + game->hshift) * size);
	else if (game->map[i][j] == '0')
		mlx_put_image_to_window(game->mlx, game->window, \
		game->floor, (j + game->wshift) * size, (i + game->hshift) * size);
	else if (game->map[i][j] == 'P')
	{
		mlx_put_image_to_window(game->mlx, game->window, \
		game->floor, (j + game->wshift) * size, (i + game->hshift) * size);
		mlx_put_image_to_window(game->mlx, game->window, \
		game->player, (j + game->wshift) * size, (i + game->hshift) * size);
	}
}

int	drow_map(t_so_long	*game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map[++i])
	{
		j = -1;
		while (game->map[i][++j])
		{
			drow_map2(game, i, j, IMG_SIZE);
			drow_map3(game, i, j, IMG_SIZE);
		}
	}
	return (0);
}

void	render_map(t_so_long	*game)
{
	game->hshift = (game->max_hcube - game->lines) / 2 + 1;
	game->wshift = (game->max_wcube - game->len_line) / 2 + 1;
	drow_map(game);
}
