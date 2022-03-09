/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:52:40 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/01 16:47:25 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_to_a(t_astack	**astack, t_astack	**bstack)
{
	int			min_op;
	t_oper_ret	oper_case;

	while ((*bstack)->fst_lst)
	{
		min_op = ft_comfort_nb(*astack, *bstack, &oper_case);
		if (oper_case.case1 == min_op)
			ft_case1(oper_case, &astack, &bstack);
		else if (oper_case.case2 == min_op)
			ft_case2(oper_case, &astack, &bstack);
		else if (oper_case.case3 == min_op)
			ft_case3(oper_case, &astack, &bstack);
		else if (oper_case.case4 == min_op)
			ft_case4(oper_case, &astack, &bstack);
		if ((*astack)->min_nb > (*astack)->fst_lst->value)
			(*astack)->min_nb = (*astack)->fst_lst->value;
		else if ((*astack)->max_nb < (*astack)->fst_lst->value)
			(*astack)->max_nb = (*astack)->fst_lst->value;
	}
}
