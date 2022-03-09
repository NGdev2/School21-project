/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_to_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:30:28 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/01 16:58:49 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_count_oper(t_oper_ret *oper)
{
	if (oper->ra > oper->rb)
		oper->case1 = oper->ra;
	else
		oper->case1 = oper->rb;
	oper->case2 = oper->ra + oper->rrb;
	oper->case3 = oper->rb + oper->rra;
	if (oper->rra > oper->rrb)
		oper->case4 = oper->rra;
	else
		oper->case4 = oper->rrb;
}

int	ft_pos_elem(t_list *lst, int nb)
{
	int	i;

	i = 0;
	while (lst && lst->value != nb)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	ft_oper_to_push2(t_list **lst, int b_val)
{
	int	pos;

	pos = 0;
	if (*lst && b_val < (*lst)->value)
	{
		while (*lst && b_val < (*lst)->value)
		{
			pos++;
			*lst = (*lst)->next;
		}
		while (*lst && b_val > (*lst)->value)
		{
			pos++;
			*lst = (*lst)->next;
		}
	}
	else
	{
		while (*lst && b_val > (*lst)->value)
		{
			pos++;
			*lst = (*lst)->next;
		}
	}
	return (pos);
}

t_oper_ret	ft_oper_to_push(t_astack *ast, int pos_b, int b_len, int b_val)
{
	t_oper_ret	oper;
	t_list		*lst;

	lst = ast->fst_lst;
	oper.rb = pos_b;
	oper.rrb = b_len - pos_b;
	if (b_val > ast->max_nb)
		oper.ra = ft_pos_elem(ast->fst_lst, ast->max_nb) + 1;
	else if (b_val < ast->min_nb)
		oper.ra = ft_pos_elem(ast->fst_lst, ast->min_nb);
	else if (b_val < ast->fst_lst->value && b_val > ft_last(ast->fst_lst))
		oper.ra = 0;
	else
		oper.ra = ft_oper_to_push2(&lst, b_val);
	oper.rra = ast->len - oper.ra;
	ft_count_oper(&oper);
	return (oper);
}
