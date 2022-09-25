/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:00:05 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 15:20:47 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
