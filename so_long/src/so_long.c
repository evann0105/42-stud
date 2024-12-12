/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:03:36 by emgret            #+#    #+#             */
/*   Updated: 2024/12/12 11:33:58 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	exit_game(t_game *game)
{
	int	i;

	if (game->win)
		mlx_destroy_window(game->mlx, game->win);
	if (game->map)
	{
		i = 0;
		while (i < game->map_height)
		{
			free(game->map[i]);
			i++;
		}
		free(game->map);
	}
	free(game);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc != 2)
	{
		ft_printf("Error\nUsage: ./so_long <map_file>\n");
		return (1);
	}
	game = init_game();
	validate_map_file(argv[1], game);
	load_map(game, argv[1]);
	find_player_position(game);
	check_path_validity(game);
	load_images(game);
	create_window(game);
	render_game(game);
	mlx_key_hook(game->win, handle_keypress, game);
	mlx_hook(game->win, 17, 0, (int (*)())exit_game, game);
	mlx_loop(game->mlx);
	return (0);
}
