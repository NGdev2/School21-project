/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_ckecker.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:03:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/20 21:55:47 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	get_next_line(char **line)
{
	int			rd;
	int			i;
	char		letter;
	static char	first_line[0];

	i = 0;
	*line = first_line;
	rd = read(0, &letter, 1);
	while (rd > 0)
	{
		if (letter == '\n')
		{
			first_line[i++] = '\n';
			break ;
		}
		first_line[i++] = letter;
		rd = read(0, &letter, 1);
	}
	first_line[i] = '\0';
	return (rd);
}
