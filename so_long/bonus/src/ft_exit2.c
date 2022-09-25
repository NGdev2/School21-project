/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:51 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:27:02 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_exit_no_free(char *er_msg, t_so_long	*s_game)
{
	ft_putendl_fd(er_msg, 2);
	free(s_game);
	exit(1);
}
