/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:47 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 19:16:56 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rra(t_list **lst_a)
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
	}
}
