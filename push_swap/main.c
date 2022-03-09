/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:45:19 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/20 22:04:59 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	ft_sort(t_astack	**astack, t_astack	**bstack)
{
	ft_push_to_b(&(*astack), &(*bstack));
	ft_push_to_a(&(*astack), &(*bstack));
	ft_finalsort(&(*astack));
}

int	main(int argc, char **argv)
{
	t_astack	*astack;
	t_astack	*bstack;
	int			i;

	i = 1;
	if (argc == 1)
		exit(1);
	astack = malloc(sizeof(t_astack));
	bstack = malloc(sizeof(t_astack));
	if (!astack || !bstack)
		ft_exit();
	bstack->fst_lst = NULL;
	ft_make_stack(argv, &astack, i);
	ft_check_dubl(astack);
	if (ft_lstsize(astack->fst_lst) == 2)
		ft_sort_two(&astack);
	else if (ft_lstsize(astack->fst_lst) == 5)
		ft_sort_five(&astack, &bstack);
	else
		ft_sort(&astack, &bstack);
	full_clean(&astack, &bstack);
}
