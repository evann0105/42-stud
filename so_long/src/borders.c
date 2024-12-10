/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borders.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:42:01 by emgret            #+#    #+#             */
/*   Updated: 2024/12/10 14:47:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	validate_borders(char *line, int line_number, int first_line_length)
{
	int	i;

	i = 0;
	if (line[strlen(line) - 1] == '\n' || line[strlen(line) - 1] == '\r')
		line[strlen(line) - 1] = '\0';
	if (line_number == 0 || line_number == first_line_length - 1)
	{
		while (i < ft_strlen(line))
		{
			if (line[i] != '1')
				exit_message("map not surrounded by walls");
			i++;
		}
	}
	else
	{
		if (line[0] != '1' || line[ft_strlen(line) - 1] != '1')
		{
			ft_printf("not surrounded by walls (line %d)\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
}

void	strip_newline(char *line)
{
	int	length;

	length = strlen(line);
	while (length > 0 && (line[length - 1] == '\n' || line[length - 1] == '\r'))
	{
		line[length - 1] = '\0';
		length--;
	}
}

