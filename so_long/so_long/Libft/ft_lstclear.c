/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:18:54 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/19 21:08:02 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpy;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		cpy = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = cpy;
	}
}
