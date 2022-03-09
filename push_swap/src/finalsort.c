/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:51:49 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/11 15:39:43 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_finalsort(t_astack **astack)
{
	unsigned int	ra;
	unsigned int	rra;
	int				end_nb;
	t_list			*lst;

	ra = 0;
	rra = 0;
	end_nb = ft_last((*astack)->fst_lst);
	lst = (*astack)->fst_lst;
	while (lst && (lst->value > end_nb))
	{
		ra++;
		lst = lst->next;
	}
	rra = (*astack)->len - ra;
	if (ra >= rra)
	{
		while (ra-- > 0)
			ft_ra(&((*astack)->fst_lst), 1);
	}
	else if (rra > ra & (int)rra != (*astack)->len)
	{
		while (rra-- > 0)
			ft_rra(&((*astack)->fst_lst), 1);
	}
}
