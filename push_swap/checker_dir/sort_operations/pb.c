/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:44:00 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 19:14:56 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_pb(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len)
{
	t_list	*el_a;

	if (!(*lst_a))
		return ;
	el_a = (*lst_a);
	*lst_a = (*lst_a)->next;
	el_a->next = *lst_b;
	*lst_b = el_a;
	(*a_len)--;
	(*b_len)++;
}
