/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:50:27 by emgret            #+#    #+#             */
/*   Updated: 2024/12/12 11:45:03 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	get_line_length(char *line)
{
	int	length;

	length = ft_strlen(line);
	while (length > 0 && (line[length - 1] == '\n' || line[length - 1] == '\r'))
	{
		length--;
	}
	return (length);
}

void	validate_characters(char *line, int line_length, t_game	*game)
{
	int	i;

	i = 0;
	while (i < line_length)
	{
		if (line[i] != '1' && line[i] != '0' && line[i] != 'P'
			&& line[i] != 'C' && line[i] != 'E')
			exit_message("Error: Invalid character in map");
		update_counts(line[i], game);
		i++;
	}
}

void	validate_lines(int fd, int *first_line_length, t_game *game)
{
	char	*line;
	int		line_number;
	int		line_length;

	game->player_count = 0;
	game->exit_count = 0;
	game->collectible_count = 0;
	line_number = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		strip_newline(line);
		line_length = ft_strlen(line);
		if (line_number == 0)
			*first_line_length = line_length;
		else if (line_length != *first_line_length)
			exit_message("Error: Map is not rectangular or square");
		validate_characters(line, line_length, game);
		validate_borders(line, line_number, *first_line_length);
		line_number++;
		free(line);
		line = get_next_line(fd);
	}
}

void	validate_map_file(const char *filename, t_game *game)
{
	int				fd;
	int				first_line_length;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		ft_printf("Error: Cannot open map file");
	validate_lines(fd, &first_line_length, game);
	close(fd);
	if (game->player_count != 1)
		exit_message("Error: Map must have exactly one player (P)");
	if (game->exit_count != 1)
		exit_message("Error: Map must have exactly one exit (E)");
	if (game->collectible_count < 1)
		exit_message("Error: Map must have at least one collectible (C)");
}
