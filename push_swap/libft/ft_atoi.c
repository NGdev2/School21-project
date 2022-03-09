/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:28:47 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 14:33:50 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../inc/push_swap.h"

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
