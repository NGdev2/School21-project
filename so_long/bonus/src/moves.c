/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:49:10 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/20 00:09:37 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	rewrite_pct(t_so_long *gm, char *new_pct, char symb_pct, void **pct)
{
	int	i;
	int	j;

	j = 1;
	*pct = mlx_xpm_file_to_image(gm->mlx, new_pct, \
	&gm->img_w, &gm->img_h);
	while (j < gm->lines)
	{
		i = 1;
		while (i < gm->len_line)
		{
			if (gm->map[j][i] == symb_pct)
				mlx_put_image_to_window(gm->mlx, gm->window, *pct, (i + \
				gm->wshift) * IMG_SIZE, (j + gm->hshift) * IMG_SIZE);
			i++;
		}
		j++;
	}
}

void	ft_move2(t_so_long *gm, t_position step)
{
	if (gm->map[step.y][step.x] == COLLECTIBLE)
	{
		if (--gm->c == 0)
			rewrite_pct(gm, IMG_EXIT2, EXIT, &gm->exit);
		ft_draw_step(gm, step, SPACE, gm->floor);
	}
	if (gm->map[step.y][step.x] == EXIT)
		step_on_finish(gm, step, gm->heropos);
	else
	{
		gm->heropos.x = step.x;
		gm->heropos.y = step.y;
		ft_draw_step(gm, gm->heropos, PLAYER, gm->player);
	}
}

void	move(t_so_long *gm, int x, int y)
{
	t_position	step;
	char		*step_str;

	step.x = gm->heropos.x + x;
	step.y = gm->heropos.y + y;
	if (gm->map[step.y][step.x] == WALL)
		return ;
	if (gm->map[step.y][step.x] == EXIT && gm->c != 0)
		return ;
	if (gm->map[gm->heropos.y][gm->heropos.x] == EXIT && gm->c == 0)
		ft_draw_step(gm, gm->heropos, EXIT, gm->exit);
	else
		ft_draw_step(gm, gm->heropos, SPACE, gm->floor);
	gm->steps++;
	step_str = ft_itoa(gm->steps);
	ft_putendl_fd(step_str, 1);
	mlx_put_image_to_window(gm->mlx, gm->window, gm->step_label, (gm->wshift + \
	gm->len_line / 2) * IMG_SIZE, (gm->hshift + gm->lines - 1) * IMG_SIZE);
	mlx_string_put(gm->mlx, gm->window, (gm->wshift + gm->len_line / 2) * \
	IMG_SIZE + 10, (gm->hshift + gm->lines) * IMG_SIZE - 27, 5, step_str);
	free(step_str);
	ft_move2(gm, step);
}
