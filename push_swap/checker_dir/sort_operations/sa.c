/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:33 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/20 21:48:38 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_sa(t_list **lst)
{
	t_list	*el;

	if (!(*lst) && !((*lst)->next))
		return ;
	el = (*lst)->next;
	(*lst)->next = el->next;
	el->next = *lst;
	*lst = el;
}
