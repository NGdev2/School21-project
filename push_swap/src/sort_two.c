/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:38:52 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/21 18:05:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_two(t_astack	**astack)
{
	if ((*astack)->fst_lst->value > (*astack)->fst_lst->next->value)
	{	
		ft_ra(&((*astack)->fst_lst), 1);
	}
}

void	ft_sort_two_rev(t_astack	**stack)
{
	if ((*stack)->fst_lst->value > (*stack)->fst_lst->next->value)
	{	
		ft_rb(&((*stack)->fst_lst), 1);
	}
}
