/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_step.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:54:29 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 23:36:26 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_draw_step(t_so_long *game, t_position step, char symb_picT, \
void *pic)
{
	game->map[step.y][step.x] = symb_picT;
	mlx_put_image_to_window(game->mlx, game->window, pic, (step.x + \
	game->wshift) * IMG_SIZE, (step.y + game->hshift) * IMG_SIZE);
}

void	step_on_finish(t_so_long *game, t_position step, t_position location)
{
	(void)location;
	if (game->c == 0)
	{
		ft_putendl_fd("YOU WIN!!! CONGRATULATIONS", 1);
		ft_destroy_win(game);
	}
	ft_draw_step(game, step, EXIT, game->player);
}
