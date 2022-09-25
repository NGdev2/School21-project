/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:49:10 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 23:39:47 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	rewrite_pct(t_so_long *game, char *new_pct, char symb_pct, void **pct)
{
	int	i;
	int	j;

	j = 1;
	*pct = mlx_xpm_file_to_image(game->mlx, new_pct, \
	&game->img_w, &game->img_h);
	while (j < game->lines)
	{
		i = 1;
		while (i < game->len_line)
		{
			if (game->map[j][i] == symb_pct)
				mlx_put_image_to_window(game->mlx, game->window, *pct, (i + \
				game->wshift) * IMG_SIZE, (j + game->hshift) * IMG_SIZE);
			i++;
		}
		j++;
	}
}

void	ft_move2(t_so_long *game, t_position step)
{
	if (game->map[step.y][step.x] == COLLECTIBLE)
	{
		if (--game->c == 0)
			rewrite_pct(game, IMG_EXIT2, EXIT, &game->exit);
		ft_draw_step(game, step, SPACE, game->floor);
	}
	if (game->map[step.y][step.x] == EXIT)
		step_on_finish(game, step, game->player_pos);
	else
	{
		game->player_pos.x = step.x;
		game->player_pos.y = step.y;
		ft_draw_step(game, game->player_pos, PLAYER, game->player);
	}
}

void	move(t_so_long *game, int x, int y)
{
	t_position	step;
	char		*str;

	step.x = game->player_pos.x + x;
	step.y = game->player_pos.y + y;
	if (game->map[step.y][step.x] == WALL)
		return ;
	if (game->map[step.y][step.x] == EXIT && game->c != 0)
		return ;
	game->steps++;
	str = ft_itoa(game->steps);
	ft_putendl_fd(str, 1);
	free(str);
	if (game->map[game->player_pos.y][game->player_pos.x] == \
	EXIT && game->c == 0)
		ft_draw_step(game, game->player_pos, EXIT, game->exit);
	else
		ft_draw_step(game, game->player_pos, SPACE, game->floor);
	ft_move2(game, step);
}
