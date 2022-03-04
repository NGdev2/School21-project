/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:37:49 by ftegan            #+#    #+#             */
/*   Updated: 2022/01/08 23:08:28 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

char	*ft_cmd_path(char *cmd, char **env)
{
	int		i;
	char	**paths;
	char	*path;
	char	*path_cmd;

	i = 0;
	while (env[i] && ft_strnstr(env[i], "PATH=", 5) == 0)
		i++;
	paths = ft_split(env[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		path = ft_strjoin(paths[i], "/");
		path_cmd = ft_strjoin(path, cmd);
		free(path);
		if (!access(path_cmd, 0))
			return (path_cmd);
		free(path_cmd);
		i++;
	}
	split_free(paths);
	return (NULL);
}

void	ft_child(char **av, char **env)
{
	int	in;

	if (access(av[1], F_OK))
		ft_error("error. file not found\n");
	else if (access(av[1], R_OK))
		ft_error("error. permission denied\n");
	in = open(av[1], O_RDONLY);
	if (in < 0)
		ft_error("open error\n");
	dup2(in, 0);
	close(in);
	ft_cmd_exe(av[2], env);
}

void	ft_parent(int ac, char **av, char **env)
{
	int	out;

	out = open(av[ac - 1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (out < 0)
		ft_error("open error\n");
	dup2(out, 1);
	close(out);
	ft_cmd_exe(av[3], env);
}

void	ft_pipex(t_pip pipv, int ac, char **av, char **env)
{
	int	i;

	i = 0;
	if (pipv.pid == -1)
		ft_error("fork fail\n");
	if (pipv.pid == 0)
	{
		dup2(pipv.pipfd[1], 1);
		close(pipv.pipfd[0]);
		close(pipv.pipfd[1]);
		ft_child(av, env);
	}
	else
	{
		dup2(pipv.pipfd[0], 0);
		while (i < 1000)
			i++;
		close(pipv.pipfd[1]);
		ft_parent(ac, av, env);
	}
}

int	main(int ac, char **av, char **env)
{
	t_pip	pipv;
	int		i;

	i = 0;
	if (ac == 5)
	{
		if (pipe(pipv.pipfd) < 0)
			ft_error("error pipe\n");
		if (open(av[1], O_RDONLY) == -1)
			ft_error("open error\n");
		pipv.pid = fork();
		ft_pipex(pipv, ac, av, env);
		close(pipv.pipfd[0]);
		close(pipv.pipfd[1]);
	}
	else
		ft_error("error input. need 4 arguments\n");
	exit(5);
}
