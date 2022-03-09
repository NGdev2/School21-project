/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:23:25 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 18:55:33 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_make_stack2(int i, t_mkst	*mkst)
{
	while (mkst->split_ag[mkst->j])
	{
		ft_is_dig(mkst->split_ag[mkst->j], &(mkst->lst->fst_lst));
		if (i == 1 && mkst->j == 0)
		{
			mkst->new_lst = ft_lstnew(ft_atoi(mkst->split_ag[mkst->j], \
			&(mkst->lst->fst_lst)));
			mkst->lst->fst_lst = mkst->new_lst;
			mkst->j++;
			mkst->lst->len++;
			mkst->iter++;
			continue ;
		}
		mkst->new_lst = ft_lstnew(ft_atoi(mkst->split_ag[mkst->j], \
		&(mkst->lst->fst_lst)));
		ft_lstadd_back(&(mkst->lst->fst_lst), mkst->new_lst);
		mkst->lst->len++;
		mkst->j++;
		mkst->iter++;
	}
}

void	ft_make_stack(char **argv, t_astack	**astack, int i)
{
	t_mkst	*mkst;

	mkst = malloc(sizeof(t_mkst));
	if (!mkst)
		ft_exit();
	mkst->lst = *astack;
	mkst->iter = 0;
	mkst->lst->len = 0;
	mkst->lst->fst_lst = NULL;
	while (argv[i])
	{
		mkst->j = 0;
		mkst->split_ag = ft_split(argv[i], ' ');
		if (!mkst->split_ag[0])
			ft_exit();
		ft_make_stack2(i, mkst);
		i++;
		split_free(mkst->split_ag);
	}
	free(mkst);
}
