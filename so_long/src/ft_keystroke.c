/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keystroke.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:24:02 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/19 22:38:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_keystroke(int keycode, t_so_long *game)
{
	if (keycode == KEY_ESC)
		ft_destroy_win(game);
	if (keycode == KEY_W || keycode == KEY_UP || keycode == KEY_SPACE)
		move(game, 0, -1);
	else if (keycode == KEY_A || keycode == KEY_LEFT)
		move(game, -1, 0);
	else if (keycode == KEY_D || keycode == KEY_RIGHT)
		move(game, 1, 0);
	else if (keycode == KEY_S || keycode == KEY_DOWN)
		move(game, 0, 1);
	return (1);
}
