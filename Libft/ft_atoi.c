/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:28:47 by ftegan            #+#    #+#             */
/*   Updated: 2021/10/20 01:10:08 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ftps(int count1)
{
	if (count1 == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			count1;
	long int	res;

	i = 0;
	count1 = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		count1 *= -1;
		i++;
	}
	if (str[i] == '+' && count1 != -1)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (res < 0)
		return (ftps(count1));
	return (res * count1);
}
