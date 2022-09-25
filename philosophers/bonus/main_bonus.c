/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:24:02 by ftegan            #+#    #+#             */
/*   Updated: 2022/06/15 21:09:59 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers_bonus.h"

int	main(int argc, char **argv)
{
	int	*value;

	if (argc != 5 && argc != 6)
		return (EXIT_FAILURE);
	value = parse_arg(argc, argv);
	if (!value)
		return (EXIT_FAILURE);
	if (ft_init(value, argc) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
