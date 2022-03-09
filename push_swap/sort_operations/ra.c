/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:58 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:10 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_ra(t_list **lst_a, int to_write)
{
	t_list	*el;

	if (*lst_a && (*lst_a)->next)
	{
		el = (*lst_a)->next;
		(*lst_a)->next = NULL;
		ft_lstadd_back(&el, *lst_a);
		*lst_a = el;
		if (to_write)
			write(1, "ra\n", 3);
	}
}
