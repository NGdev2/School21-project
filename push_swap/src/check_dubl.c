/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dubl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:19:59 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 14:19:01 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_check_dubl(t_astack	*astack)
{
	t_list	*next_lst;
	t_list	*lst;
	int		sim;

	lst = astack->fst_lst;
	while (lst)
	{
		next_lst = lst->next;
		while (next_lst)
		{
			if (lst->value == next_lst->value)
			{
				sim = lst->value;
				ft_exit();
			}
			next_lst = next_lst->next;
		}
		lst = lst->next;
	}
}
