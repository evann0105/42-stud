/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:41:46 by emgret            #+#    #+#             */
/*   Updated: 2024/12/10 14:52:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static char	**allocate_map(int height)
{
	char	**map;

	map = malloc(sizeof(char *) * (height + 1));
	if (!map)
		exit_message("Error\nFailed to allocate memory for map");
	return (map);
}

static int	count_map_height_and_open(const char *filename, int *fd)
{
	int		height;
	char	*line;

	*fd = open(filename, O_RDONLY);
	if (*fd == -1)
		exit_message("Error\nFailed to open map file");
	height = 0;
	line = get_next_line(*fd);
	while (line != NULL)
	{
		free(line);
		height++;
		line = get_next_line(*fd);
	}
	close(*fd);
	return (height);
}

static void	load_map_lines(t_game *game, int fd)
{
	int		row;
	char	*line;
	int		line_length;

	row = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		line_length = ft_strlen(line);
		if (line[line_length - 1] == '\n')
			line_length--;
		if (row == 0)
			game->map_width = line_length;
		game->map[row] = line;
		row++;
		line = get_next_line(fd);
	}
	game->map[row] = NULL;
}

void	load_map(t_game *game, const char *filename)
{
	int	fd;

	game->map_height = count_map_height_and_open(filename, &fd);
	game->map = allocate_map(game->map_height);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		exit_message("Error\nFailed to reopen map file");
	load_map_lines(game, fd);
	close(fd);
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map_height)
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
}
