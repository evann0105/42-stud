/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borders.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:42:01 by emgret            #+#    #+#             */
/*   Updated: 2025/01/06 09:57:00 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	strip_newline(char *line)
{
	int	length;

	length = ft_strlen(line);
	while (length > 0 && (line[length - 1] == '\n' || line[length - 1] == '\r'))
	{
		line[length - 1] = '\0';
		length--;
	}
}

void	validate_borders(char *line, int line_number, int total_lines,
	int len)
{
	int	i;

	strip_newline(line);
	if ((int)ft_strlen(line) != len)
		exit_message("Error:\nmap not surrounded by walls");
	i = 0;
	if (line_number == 0 || line_number == total_lines - 1)
	{
		while (i < ft_strlen(line))
		{
			if (line[i] != '1')
				exit_message("Error:\nmap not surrounded by walls");
			i++;
		}
	}
	else
	{
		if (line[0] != '1' || line[ft_strlen(line) - 1] != '1')
		{
			ft_printf("Error:\nmap not surrounded by walls\n",
				line_number);
			exit(EXIT_FAILURE);
		}
	}
}

/* void	validate_map(char **map, int total_lines)
{
	int	expected_length;
	int	line_number;

	if (total_lines == 0)
		exit_message("Error:\nempty map");
	expected_length = ft_strlen(map[0]);
	line_number = 0;
	while (line_number < total_lines)
	{
		validate_borders(map[line_number], line_number, total_lines,
			expected_length);
		line_number++;
	}
} */
