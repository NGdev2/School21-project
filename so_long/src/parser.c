/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:14:20 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:27:31 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_map_size(t_so_long	*s_game, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (ft_strchr(str, '\n'))
		len--;
	free(str);
	str = NULL;
	if (!(s_game->len_line))
		s_game->len_line = len;
	else if (s_game->len_line != len)
		ft_exit_no_free(ERROR_MAP, s_game);
	s_game->lines++;
}

void	ft_map_fill(t_so_long	*s_game, char *str)
{
	s_game->map[s_game->i++] = str;
	s_game->map[s_game->i] = NULL;
}

void	ft_get_all_line(char *mapname, void f(t_so_long	*s_game, char *str), \
t_so_long	*s_game)
{
	char	*str;
	int		fd;

	fd = open(mapname, O_RDONLY);
	str = get_next_line(fd);
	if (!str)
		ft_error(ERROR_MAP);
	while (str)
	{
		f(s_game, str);
		str = get_next_line(fd);
	}
	close(fd);
}

void	ft_parser(char *mapname, t_so_long	*s_game)
{
	ft_get_all_line(mapname, ft_map_size, s_game);
	s_game->i = 0;
	s_game->map = malloc(sizeof(char *) * (s_game->lines + 1));
	if (!s_game->map)
		ft_error(ERROR_MALLOC);
	ft_get_all_line(mapname, ft_map_fill, s_game);
	ft_check_map(s_game);
}
