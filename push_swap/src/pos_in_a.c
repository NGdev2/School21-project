/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_in_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:25:26 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/01 16:47:58 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_pos_in_a(t_list *lst, int value)
{
	int	pos;

	pos = 0;
	while (lst && (lst->value < value))
	{
		lst = lst->next;
		pos++;
	}
	return (pos);
}
