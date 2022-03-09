/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:49:20 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/01 14:12:42 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_three(t_astack	***astack)
{
	int	*a;
	int	*b;
	int	*c;

	a = &(*(*astack))->fst_lst->value;
	b = &(*(*astack))->fst_lst->next->value;
	c = &(*(*astack))->fst_lst->next->next->value;
	if (*a < *b && *b > *c && *a < *c)
	{
		ft_sa(&(*(*astack))->fst_lst, 1);
		ft_ra(&(*(*astack))->fst_lst, 1);
	}
	else if (*a < *b && *b > *c && *a > *c)
		ft_rra(&(*(*astack))->fst_lst, 1);
	else if (*a > *b && *b < *c && *a < *c)
		ft_sa(&(*(*astack))->fst_lst, 1);
	else if (*a > *b && *b < *c && *a > *c)
		ft_ra(&(*(*astack))->fst_lst, 1);
	else if (*a > *b && *b > *c && *a > *c)
	{
		ft_sa(&(*(*astack))->fst_lst, 1);
		ft_rra(&(*(*astack))->fst_lst, 1);
	}
}
