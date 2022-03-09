/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:47 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:23 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rra(t_list **lst_a, int to_write)
{
	t_list	*el;
	t_list	*last_el;

	if ((*lst_a)->next && *lst_a)
	{
		el = *lst_a;
		while (el->next->next)
			el = el->next;
		last_el = el->next;
		el->next = NULL;
		last_el->next = NULL;
		ft_lstadd_front(lst_a, last_el);
		if (to_write)
			write(1, "rra\n", 4);
	}
}
