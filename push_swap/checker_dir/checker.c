/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:35:33 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/20 22:03:14 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_oper_case(char	*str, t_astack **as, t_astack **bs)
{
	if (ft_strnstr(str, "sa\n", 3))
		ft_sa(&(*as)->fst_lst);
	else if (ft_strnstr(str, "sb\n", 3))
		ft_sb(&(*bs)->fst_lst);
	else if (ft_strnstr(str, "ss\n", 3))
		ft_ss(&(*as)->fst_lst, &(*bs)->fst_lst);
	else if (ft_strnstr(str, "pa\n", 3))
		ft_pa(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
	else if (ft_strnstr(str, "pb\n", 3))
		ft_pb(&(*as)->fst_lst, &(*bs)->fst_lst, &(*as)->len, &(*bs)->len);
	else if (ft_strnstr(str, "ra\n", 3))
		ft_ra(&(*as)->fst_lst);
	else if (ft_strnstr(str, "rb\n", 3))
		ft_rb(&(*bs)->fst_lst);
	else if (ft_strnstr(str, "rr\n", 3))
		ft_rr(&(*as)->fst_lst, &(*bs)->fst_lst);
	else
		return (0);
	return (1);
}

void	ft_check_sort(t_astack **astack, t_astack **bstack)
{
	int		is_sort;
	t_list	*lst;

	lst = (*astack)->fst_lst;
	is_sort = 1;
	while (lst && lst->next)
	{
		if (lst->value > lst->next->value)
			is_sort = 0;
		lst = lst->next;
	}
	if (is_sort && !(*bstack)->fst_lst)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

void	ft_run_oper(t_astack **as, t_astack **bs)
{
	char	*str;

	while (get_next_line(&str) > 0)
	{
		if (ft_oper_case(str, as, bs) == 0)
		{
			if (ft_strnstr(str, "rra\n", 4))
				ft_rra(&(*as)->fst_lst);
			else if (ft_strnstr(str, "rrb\n", 4))
				ft_rrb(&(*bs)->fst_lst);
			else if (ft_strnstr(str, "rrr\n", 4))
				ft_rrr(&(*as)->fst_lst, &(*bs)->fst_lst);
			else
				ft_exit();
		}
	}
}

int	main(int argc, char **argv)
{
	t_astack	*astack;
	t_astack	*bstack;
	int			i;

	i = 1;
	if (argc == 1)
		return (0);
	astack = malloc(sizeof(t_astack));
	bstack = malloc(sizeof(t_astack));
	if (!astack || !bstack)
	{
		ft_putstr_fd("malloc error\n", 2);
		exit(1);
	}
	bstack->fst_lst = NULL;
	bstack->len = 0;
	ft_make_stack(argv, &astack, i);
	ft_check_dubl(astack);
	ft_run_oper(&astack, &bstack);
	ft_check_sort(&astack, &bstack);
	full_clean(&astack, &bstack);
}
