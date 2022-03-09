/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:55 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:15 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rb(t_list **lst_b, int to_write)
{
	t_list	*el;

	if (*lst_b && (*lst_b)->next)
	{
		el = (*lst_b)->next;
		(*lst_b)->next = NULL;
		ft_lstadd_back(&el, *lst_b);
		*lst_b = el;
		if (to_write)
			write(1, "rb\n", 3);
	}
}
