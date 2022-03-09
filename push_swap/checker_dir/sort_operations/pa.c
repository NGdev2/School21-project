/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:01 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 19:14:52 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_pa(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len)
{
	t_list	*el_b;

	if (!(*lst_b))
		return ;
	el_b = (*lst_b)->next;
	(*lst_b)->next = (*lst_a);
	*lst_a = *lst_b;
	*lst_b = el_b;
	(*a_len)++;
	(*b_len)--;
}
