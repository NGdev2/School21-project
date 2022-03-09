/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comfort_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:16:31 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/02 16:04:03 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	ft_comfort_nb(t_astack *astack, t_astack *bstack, t_oper_ret *oper_case)
{
	t_var	var;

	var.bst = bstack->fst_lst;
	var.min = astack->len + bstack->len;
	var.pos_b = 0;
	while (var.bst)
	{
		var.cur_op = ft_oper_to_push(astack, var.pos_b, bstack->len, \
		var.bst->value);
		var.cur_min = ft_min(ft_min(var.cur_op.case1, var.cur_op.case2), \
		ft_min(var.cur_op.case3, var.cur_op.case4));
		if (var.min > var.cur_min)
		{
			var.min_op = var.cur_op;
			var.min = var.cur_min;
		}
		var.pos_b++;
		var.bst = var.bst->next;
	}
	*oper_case = var.min_op;
	return (var.min);
}
