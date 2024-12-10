/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:46:54 by emgret            #+#    #+#             */
/*   Updated: 2024/12/10 16:23:10 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_game	*init_game(void)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (!game)
		exit_message("Error\nFailed to allocate memory for game structure");
	game->mlx = mlx_init();
	if (!game->mlx)
	{
		free(game);
		exit_message("Error\nFailed to initialize MinilibX");
	}
	game->win = NULL;
	game->map = NULL;
	game->map_width = 0;
	game->map_height = 0;
	game->player_x = 0;
	game->player_y = 0;
	game->moves = 0;
	ft_printf("init collectible count = %d\n", game->collectible_count);
	return (game);
}

void	create_window(t_game *game)
{
	game->win = mlx_new_window(game->mlx, game->map_width * 32,
			game->map_height * 32, "so_long");
	if (!game->win)
	{
		free(game);
		exit_message("Error\nFailed to create window");
	}
}

