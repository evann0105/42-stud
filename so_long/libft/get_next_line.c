/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:00:41 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 18:59:11 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_check(char *str)
{
	int		i;
	char	*line;

	if (!str || str[0] == '\0')
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
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
	if (!str[i] || str[i + 1] == '\0')
		return (free(str), NULL);
	reste = malloc(sizeof(char) * (ft_strlen_gnl(str) - i));
	if (!reste)
		return (free(str), NULL);
	i++;
	j = 0;
	while (str[i])
		reste[j++] = str[i++];
	reste[j] = '\0';
	return (free(str), reste);
}

char	*get_next_line(int fd)
{
	static char	*conca;
	char		*stack;
	char		*put_line;
	int			nb_byte;

	stack = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!stack)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(stack), NULL);
	nb_byte = 1;
	while (!ft_strchr_gnl(conca, '\n') && nb_byte != 0)
	{
		nb_byte = read(fd, stack, BUFFER_SIZE);
		if (nb_byte == -1)
			return (free(stack), free(conca), conca = NULL, NULL);
		stack[nb_byte] = '\0';
		conca = ft_strjoin_gnl(conca, stack);
		if (!conca)
			return (free(conca), NULL);
	}
	free(stack);
	put_line = read_check(conca);
	conca = save_reste(conca);
	return (put_line);
}

/* #include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("fichier_test.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Erreur lors de l'ouverture du fichier");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
} */
