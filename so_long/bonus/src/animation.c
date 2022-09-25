/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:52:37 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/20 00:10:32 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_animate_player(t_so_long	*gm, char *img)
{
	gm->player = mlx_xpm_file_to_image(gm->mlx, \
		img, &gm->img_w, &gm->img_h);
	mlx_put_image_to_window(gm->mlx, gm->window, \
	gm->player, (gm->heropos.x + gm->wshift) * IMG_SIZE, (\
	gm->heropos.y + gm->hshift) * IMG_SIZE);
}

void	ft_animate_killer(t_so_long	*gm, char *l_img, char *r_img, int size)
{
	if (gm->k > 0)
	{
		gm->lkiller = mlx_xpm_file_to_image(gm->mlx, \
			l_img, &gm->img_w, &gm->img_h);
		gm->rkiller = mlx_xpm_file_to_image(gm->mlx, \
			r_img, &gm->img_w, &gm->img_h);
		mlx_put_image_to_window(gm->mlx, gm->window, \
		gm->floor, (gm->kpos.x + gm->wshift) * size, \
		(gm->kpos.y + gm->hshift) * size);
		if (gm->steptoright == 1)
		{
			if (gm->kpos.x == gm->heropos.x && gm->kpos.y == gm->heropos.y)
				ft_lose(gm);
			mlx_put_image_to_window(gm->mlx, gm->window, gm->rkiller, (gm->\
			kpos.x + gm->wshift) * size, (gm->kpos.y + gm->hshift) * size);
		}
		else
		{
			if (gm->kpos.x == gm->heropos.x && gm->kpos.y == gm->heropos.y)
				ft_lose(gm);
			mlx_put_image_to_window(gm->mlx, gm->window, gm->lkiller, (gm->\
			kpos.x + gm->wshift) * size, (gm->kpos.y + gm->hshift) * size);
		}
	}
}

void	ft_killer_step(t_so_long	*gm, t_position	stepPos, int u, int sz)
{
	if (gm->map[stepPos.y][stepPos.x] == WALL || gm->map[stepPos.y][stepPos.x] \
	== COLLECTIBLE || gm->map[stepPos.y][stepPos.x] == EXIT)
	{
		if (gm->steptoright == 1)
			gm->steptoright = 0;
		else
			gm->steptoright = 1;
		u = 0;
	}
	else if (gm->map[stepPos.y][stepPos.x] == PLAYER)
		ft_lose(gm);
	else
	{
		gm->map[gm->kpos.y][gm->kpos.x] = SPACE;
		mlx_put_image_to_window(gm->mlx, gm->window, gm->floor, (gm->kpos.x + \
		gm->wshift) * sz, (gm->kpos.y + gm->hshift) * sz);
		gm->kpos = stepPos;
		if (gm->steptoright == 1)
			mlx_put_image_to_window(gm->mlx, gm->window, gm->rkiller, \
			(gm->kpos.x + gm->wshift) * sz, (gm->kpos.y + gm->hshift) * sz);
		else
			mlx_put_image_to_window(gm->mlx, gm->window, gm->lkiller, \
			(gm->kpos.x + gm->wshift) * sz, (gm->kpos.y + gm->hshift) * sz);
	}
}

void	ft_animation2(t_so_long	*gm, int u)
{
	if (u % 1500 == 0)
		ft_animate_player(gm, IMG_PLAYER1);
	else if (u % 1000 == 0)
	{
		ft_animate_killer(gm, IMG_LKILLER2, IMG_RKILLER2, IMG_SIZE);
		ft_animate_player(gm, IMG_PLAYER3);
	}
	else if (u % 500 == 0)
	{
		ft_animate_killer(gm, IMG_LKILLER, IMG_RKILLER, IMG_SIZE);
		ft_animate_player(gm, IMG_PLAYER2);
	}
}

int	ft_animation(t_so_long	*gm)
{
	static int	u;
	t_position	kil_step_pos;

	if (u % 10000 == 0)
	{
		if (gm->k > 0)
		{
			kil_step_pos = gm->kpos;
			if (gm->steptoright == 1)
				kil_step_pos.x++;
			else
				kil_step_pos.x--;
			ft_killer_step(gm, kil_step_pos, u, IMG_SIZE);
		}
		u = 0;
	}
	else
		ft_animation2(gm, u);
	u++;
	return (0);
}
