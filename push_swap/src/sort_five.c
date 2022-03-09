/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:37:05 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/02 15:17:11 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_five2(t_astack	**as, t_astack	**bs, int m, int m2)
{
	int		min;
	int		min2;

	min = 0;
	min2 = 0;
	while ((*as)->fst_lst && (!min || !min2))
	{
		if ((*as)->fst_lst->value == m)
		{
			ft_pb(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
			min = 1;
		}
		else if ((*as)->fst_lst->value == m2)
		{
			ft_pb(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
			min2 = 1;
		}
		else
			ft_ra(&(*as)->fst_lst, 1);
	}
	ft_sort_three(&as);
	if ((*bs)->fst_lst->value < (*bs)->fst_lst->next->value)
		ft_sort_two_rev(bs);
	ft_pa(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
	ft_pa(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
}

void	ft_sort_five_min(t_astack **astack, t_min *min)
{
	min->lst = (*astack)->fst_lst;
	min->min_nb = min->lst->value;
	if (min->min_nb > min->lst->next->value)
	{
		min->min_nb2 = min->min_nb;
		min->min_nb = min->lst->next->value;
	}
	else
		min->min_nb2 = min->lst->next->value;
}

void	ft_sort_five(t_astack **astack, t_astack **bstack)
{
	t_min	*min;

	min = malloc (sizeof(t_min));
	ft_sort_five_min(astack, min);
	min->lst = min->lst->next->next;
	while (min->lst)
	{
		if (min->lst->value < min->min_nb2)
		{
			if (min->lst->value < min->min_nb)
			{
				min->min_nb2 = min->min_nb;
				min->min_nb = min->lst->value;
			}
			else
				min->min_nb2 = min->lst->value;
		}
		min->lst = min->lst->next;
	}
	ft_sort_five2(&(*astack), &(*bstack), min->min_nb, min->min_nb2);
	free(min);
}
