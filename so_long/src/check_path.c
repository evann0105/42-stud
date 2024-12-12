/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:10:19 by emgret            #+#    #+#             */
/*   Updated: 2024/12/12 11:42:34 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	flood_fill_local(t_flood_data *data, int x, int y)
{
	if (x < 0 || y < 0 || x >= data->game->map_height
		|| y >= data->game->map_width)
		return ;
	if (data->map[x][y] == '1' || data->map[x][y] == 'F')
		return ;
	if (data->map[x][y] == 'C')
		(*data->collectible_count)--;
	if (data->map[x][y] == 'E')
		(*data->exit_count)--;
	data->map[x][y] = 'F';
	flood_fill_local(data, x + 1, y);
	flood_fill_local(data, x - 1, y);
	flood_fill_local(data, x, y + 1);
	flood_fill_local(data, x, y - 1);
}

static char	**copy_map(t_game *game)
{
	char	**map_copy;
	int		i;

	map_copy = malloc(sizeof(char *) * game->map_height);
	if (!map_copy)
		exit_message("Error: Memory allocation failed");
	i = 0;
	while (i < game->map_height)
	{
		map_copy[i] = ft_strdup(game->map[i]);
		if (!map_copy[i])
		{
			while (--i >= 0)
				free(map_copy[i]);
			free(map_copy);
			exit_message("Error: Memory allocation failed");
		}
		i++;
	}
	return (map_copy);
}

static void	free_map_copy(char **map_copy, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map_copy[i]);
		i++;
	}
	free(map_copy);
}

void	check_path_validity(t_game *game)
{
	char			**map_copy;
	int				collectible_count;
	int				exit_count;
	t_flood_data	data;

	map_copy = copy_map(game);
	collectible_count = game->collectible_count;
	exit_count = game->exit_count;
	data.map = map_copy;
	data.collectible_count = &collectible_count;
	data.exit_count = &exit_count;
	data.game = game;
	find_player_position(game);
	flood_fill_local(&data, game->player_y, game->player_x);
	free_map_copy(map_copy, game->map_height);
	if (collectible_count > 0 || exit_count > 0)
		exit_message("Error: Map is not finishable");
}
