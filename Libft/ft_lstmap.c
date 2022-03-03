/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:13:44 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/20 00:55:17 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*my_list;
	t_list	*my_elem;

	if (!lst || !f)
		return (NULL);
	my_list = ft_lstnew(f(lst->content));
	if (!my_list)
		return (0);
	lst = lst->next;
	my_elem = my_list->next;
	while (lst)
	{
		my_elem = ft_lstnew(f(lst->content));
		if (my_elem == NULL)
		{
			ft_lstclear(&my_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&my_list, my_elem);
		lst = lst->next;
	}
	return (my_list);
}
