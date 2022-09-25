/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:11:36 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:32:29 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_st_init(t_so_long	*st_game)
{
	st_game->i = 0;
	st_game->len_line = 0;
	st_game->lines = 0;
	st_game->p = 0;
	st_game->c = 0;
	st_game->e = 0;
	st_game->inside = 0;
	st_game->wshift = 0;
	st_game->hshift = 0;
	st_game->img_h = 0;
	st_game->img_w = 0;
	st_game->steps = 0;
	st_game->on_exit = 0;
}

int	main(int argc, char **argv)
{
	t_so_long	*st_game;

	ft_checker_ext(argc, argv);
	st_game = malloc(sizeof(t_so_long));
	if (!st_game)
		ft_error(ERROR_MALLOC);
	ft_st_init(st_game);
	ft_parser(argv[1], st_game);
	ft_mlx_init(st_game);
	render_map(st_game);
	mlx_hook(st_game->window, 02, 1L << 0, ft_keystroke, st_game);
	mlx_hook(st_game->window, 17, 1L << 0, ft_destroy_win, st_game);
	mlx_loop(st_game->mlx);
	return (0);
}
