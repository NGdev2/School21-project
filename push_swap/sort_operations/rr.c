/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:43:39 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/14 16:36:19 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rr(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a, 0);
	ft_rb(lst_b, 0);
	write(1, "rr\n", 3);
}
