/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_clean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:26:21 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/01 14:10:13 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	full_clean(t_astack	**astack, t_astack	**bstack)
{
	ft_lstclear(&((*astack)->fst_lst));
	ft_lstclear(&((*bstack)->fst_lst));
	free(*astack);
	free(*bstack);
}
