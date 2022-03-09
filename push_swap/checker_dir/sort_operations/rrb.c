/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:47 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 19:17:02 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rrb(t_list **lst_b)
{
	t_list	*el;
	t_list	*last_el;

	if ((*lst_b)->next && *lst_b)
	{
		el = *lst_b;
		while (el->next->next)
			el = el->next;
		last_el = el->next;
		el->next = NULL;
		last_el->next = NULL;
		ft_lstadd_front(lst_b, last_el);
	}
}
