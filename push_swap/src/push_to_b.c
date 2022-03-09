/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:21:32 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/11 15:36:48 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_to_b(t_astack	**astack, t_astack	**bstack)
{
	int		len;

	(*bstack)->len = 0;
	(*bstack)->fst_lst = NULL;
	len = ft_lstsize((*astack)->fst_lst);
	while (len-- > 3)
	{
		ft_pb(&(*astack)->fst_lst, &(*bstack)->fst_lst, \
		&(*astack)->len, &(*bstack)->len);
	}
	if ((*astack)->len == 3)
	{
		ft_sort_three(&astack);
		(*astack)->max_nb = (*astack)->fst_lst->next->next->value;
	}
	(*astack)->min_nb = (*astack)->fst_lst->value;
}
