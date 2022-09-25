/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:26:01 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:25:49 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_border(int line, t_so_long	*s_game)
{
	s_game->i = 0;
	while (s_game->i < s_game->len_line)
	{
		if (s_game->map[line][s_game->i] != WALL)
			ft_exit(ERROR_MAP, s_game);
		s_game->i++;
	}
}

void	ft_check_side(int row, t_so_long	*s_game)
{
	s_game->i = 0;
	while (s_game->i < s_game->lines - 1)
	{
		if (s_game->map[s_game->i][row] != WALL)
			ft_exit(ERROR_MAP, s_game);
		s_game->i++;
	}
}

void	ft_save_pos(t_so_long	*game, t_position *pos, int *el)
{
	(*el)++;
	pos->x = game->i;
	pos->y = game->j;
}

void	ft_check_characters(t_so_long	*s_game)
{
	s_game->j = 0;
	s_game->i = 0;
	while (s_game->j < s_game->lines)
	{
		while (s_game->i < s_game->len_line)
		{
			if (s_game->map[s_game->j][s_game->i] == PLAYER)
				ft_save_pos(s_game, &(s_game->player_pos), &s_game->p);
			else if (s_game->map[s_game->j][s_game->i] == COLLECTIBLE)
				s_game->c++;
			else if (s_game->map[s_game->j][s_game->i] == EXIT)
				ft_save_pos(s_game, &(s_game->exit_pos), &(s_game->e));
			else if (s_game->map[s_game->j][s_game->i] != WALL && \
			s_game->map[s_game->j][s_game->i] != SPACE)
				ft_error(ERROR_MAP);
			s_game->i++;
		}
		s_game->j++;
		s_game->i = 0;
	}
	if (s_game->p != 1 || s_game->c <= 0 || s_game->e < 1)
		ft_exit(ERROR_MAP, s_game);
}

void	ft_check_map(t_so_long	*s_game)
{
	ft_check_border(0, s_game);
	ft_check_border(s_game->lines - 1, s_game);
	ft_check_side(0, s_game);
	ft_check_side(s_game->len_line - 1, s_game);
	ft_check_characters(s_game);
}
