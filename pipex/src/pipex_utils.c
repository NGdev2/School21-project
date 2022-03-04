/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:31:34 by ftegan            #+#    #+#             */
/*   Updated: 2022/01/08 23:07:18 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

char	*split_free(char **paths)
{
	size_t	i;

	if (paths)
	{
		i = -1;
		while (paths[++i])
			free(paths[i]);
		free(paths[i]);
		free(paths);
	}
	return (NULL);
}

void	ft_cmd_exe(char *arg, char **env)
{
	char	**cmd_and_param;
	char	*path;

	cmd_and_param = ft_split(arg, ' ');
	path = ft_cmd_path(cmd_and_param[0], env);
	if (execve(path, cmd_and_param, env) == -1)
		ft_error("error cmd exec");
}
