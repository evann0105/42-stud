/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:00:41 by emgret            #+#    #+#             */
/*   Updated: 2024/11/15 14:33:39 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_check(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str || str[0])
		return (NULL);
	while (str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*save_reste(char *str)
{
	char	*reste;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i] || !str[i + 1])
		return (free(str), NULL);
	reste = malloc(sizeof(char) * (ft_strlen(str) - i));
	if (!reste)
		return (free(str), NULL);
	i++;
	j = 0;
	while (str[i])
	{
		reste[j] = str[i];
		j++;
		i++;
	}
	reste[j] = '\0';
	return (free(str), reste);
}

char	*get_next_line(int fd)
{
	static char	*conca;
	char		*stack;
	char		*put_line;
	int			nb_byte;

	stack = malloc(sizeof(char) * (BUFFERSIZE + 1));
	if (!stack)
		return (NULL);
	nb_byte = 1;
	if (fd < 0 || BUFFERSIZE <= 0)
		return (NULL);
	while (!ft_strchr(conca, '\n') && nb_byte != 0)
	{
		nb_byte = read(fd, stack, BUFFERSIZE);
		if (nb_byte == -1)
			return (free(stack), free(conca), conca = NULL, NULL);
		stack[nb_byte] = '\0';
		conca = ft_strjoin(conca, stack);
		if (!conca)
			return (free(conca), NULL);
	}
	free(stack);
	put_line = read_check(conca);
	conca = save_reste(conca);
	return (put_line);
}
