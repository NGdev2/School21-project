/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 01:39:37 by ftegan            #+#    #+#             */
/*   Updated: 2022/01/31 23:25:51 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_case1(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack)
{
	while (oper.ra > 0 && oper.rb > 0 && oper.case1--)
	{
		ft_rr(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst);
		oper.ra--;
		oper.rb--;
	}
	while (oper.ra > oper.rb && oper.ra > 0)
	{
		ft_ra(&(*(*astack))->fst_lst, 1);
		oper.ra--;
	}
	while (oper.rb > oper.ra && oper.rb > 0)
	{
		ft_rb(&(*(*bstack))->fst_lst, 1);
		oper.rb--;
	}
	ft_pa(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst, \
	&(*(*astack))->len, &(*(*bstack))->len);
}

void	ft_case2(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack)
{
	while (oper.ra > 0)
	{
		ft_ra(&(*(*astack))->fst_lst, 1);
		oper.ra--;
	}
	while (oper.rrb > 0)
	{
		ft_rrb(&(*(*bstack))->fst_lst, 1);
		oper.rrb--;
	}
	ft_pa(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst, \
	&(*(*astack))->len, &(*(*bstack))->len);
}

void	ft_case3(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack)
{
	while (oper.rb > 0)
	{
		ft_rb(&(*(*bstack))->fst_lst, 1);
		oper.rb--;
	}
	while (oper.rra > 0)
	{
		ft_rra(&(*(*astack))->fst_lst, 1);
		oper.rra--;
	}
	ft_pa(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst, \
	&(*(*astack))->len, &(*(*bstack))->len);
}

void	ft_case4(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack)
{
	while (oper.rra > 0 && oper.rrb > 0 && oper.case4--)
	{
		ft_rrr(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst);
		oper.rra--;
		oper.rrb--;
	}
	while (oper.rra > oper.rrb && oper.rra > 0)
	{
		ft_rra(&(*(*astack))->fst_lst, 1);
		oper.rra--;
	}
	while (oper.rrb > oper.rra && oper.rrb > 0)
	{
		ft_rrb(&(*(*bstack))->fst_lst, 1);
		oper.rrb--;
	}
	ft_pa(&(*(*astack))->fst_lst, &(*(*bstack))->fst_lst, \
	&(*(*astack))->len, &(*(*bstack))->len);
}
