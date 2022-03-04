/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:56:59 by ftegan            #+#    #+#             */
/*   Updated: 2022/01/08 23:09:49 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_pip
{
	int		pipfd[2];
	pid_t	pid;
}	t_pip;

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	ft_error(char *str);
char	*split_free(char **paths);
void	ft_cmd_exe(char *arg, char **env);
char	*ft_cmd_path(char *cmd, char **env);

#endif