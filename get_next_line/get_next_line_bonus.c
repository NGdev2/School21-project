/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:52:03 by ftegan            #+#    #+#             */
/*   Updated: 2021/11/24 01:07:06 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_line(char *mem)
{
	int		len;
	char	*line;

	len = 0;
	if (mem[0] == '\0')
		return (NULL);
	while (mem[len] && mem[len] != '\n')
		len++;
	line = (char *)malloc(sizeof(char) * (len + 2));
	if (!line)
		return (NULL);
	len = 0;
	while (mem[len] && mem[len] != '\n')
	{
		line[len] = mem[len];
		len++;
	}
	if (mem[len] == '\n')
		line[len++] = '\n';
	line[len] = '\0';
	return (line);
}

char	*ft_get_mem(char *mem)
{
	char	*new_mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (mem[i] && mem[i] != '\n')
		i++;
	if (!(mem[i]))
	{
		free(mem);
		mem = NULL;
		return (NULL);
	}
	new_mem = (char *)malloc(sizeof(char) * (ft_strlen(mem) - i + 1));
	if (!new_mem)
		return (NULL);
	i++;
	while (mem[i] != '\0')
		new_mem[j++] = mem[i++];
	new_mem[j] = '\0';
	free(mem);
	return (new_mem);
}

char	*ft_read(int fd, char *mem)
{
	char	buf[BUFFER_SIZE + 1];
	int		len;

	len = 1;
	while (len != 0)
	{
		len = read(fd, buf, BUFFER_SIZE);
		if (len == -1)
			return (NULL);
		buf[len] = '\0';
		mem = ft_strjoin_for_gnl(mem, buf);
		if (!mem)
			return (NULL);
		if (ft_strchr(mem, '\n'))
			return (mem);
	}
	return (mem);
}

char	*get_next_line(int fd)
{
	static char	*mem[10240];
	char		*out;

	if (fd >= 10240)
		return(NULL);
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	mem[fd] = ft_read(fd, mem[fd]);
	if (!(mem[fd]))
		return (NULL);
	out = ft_get_line(mem[fd]);
	mem[fd] = ft_get_mem(mem[fd]);
	return (out);
}
