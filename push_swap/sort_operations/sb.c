/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:31 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:39 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sb(t_list **lst, int to_write)
{
	t_list	*el;

	if (!(*lst) && !((*lst)->next))
		ft_exit();
	el = (*lst)->next;
	(*lst)->next = el->next;
	el->next = *lst;
	*lst = el;
	if (to_write)
		write(1, "sb\n", 3);
}
