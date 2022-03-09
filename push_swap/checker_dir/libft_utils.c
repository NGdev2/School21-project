/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:38:23 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/18 01:01:17 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ref;

	ref = *lst;
	if (ref == NULL)
	{
		(*lst) = new;
		return ;
	}
	while (ref->next)
		ref = ref->next;
	ref->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

t_list	*ft_lstnew(int value)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem->value = value;
	elem->next = NULL;
	return (elem);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*cpy;

	while (lst && *lst)
	{
		cpy = (*lst)->next;
		free(*lst);
		(*lst) = cpy;
	}
}

int	ft_atoi(const char *str, t_list **fst_lst)
{
	int			i;
	int			negative;
	long long	number;

	i = 0;
	negative = 1;
	number = 0;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		number = number * 10 + (str[i++] - 48);
	number *= negative;
	if (number > -2147483648 && number < 2147483647)
		return (number);
	else
	{
		ft_lstclear(fst_lst);
		ft_exit();
	}
	return ((int)number);
}
