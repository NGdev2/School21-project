/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:33 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:35 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sa(t_list **lst, int to_write)
{
	t_list	*el;

	if (!(*lst) && !((*lst)->next))
		ft_exit();
	el = (*lst)->next;
	(*lst)->next = el->next;
	el->next = *lst;
	*lst = el;
	if (to_write)
		write(1, "sa\n", 3);
}
