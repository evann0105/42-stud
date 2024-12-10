/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:58:13 by emgret            #+#    #+#             */
/*   Updated: 2024/12/10 16:02:23 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_player(t_game *game, int dx, int dy)
{
	int	new_x;
	int	new_y;

	new_x = game->player_x + dx;
	new_y = game->player_y + dy;
	if (game->map[new_y][new_x] == '1')
		return ;
	if (game->map[new_y][new_x] == 'E')
	{
		if (game->collectible_count == 0)
		{
			ft_printf("Congratulations! You finished the game in %d moves.\n",
				game->moves);
			exit_game(game);
		}
		else
			return ;
	}
	if (game->map[new_y][new_x] == 'C')
	{
		ft_printf("collectible before decrementation %d\n",
			game->collectible_count);
		game->collectible_count--;
		ft_printf("collectible after decrementation %d\n",
			game->collectible_count);
		game->map[new_y][new_x] = '0';
	}
	game->map[game->player_y][game->player_x] = '0';
	game->map[new_y][new_x] = 'P';
	game->player_x = new_x;
	game->player_y = new_y;
	game->moves++;
	ft_printf("Moves: %d\n", game->moves);
	render_game(game);
}

void	find_player_position(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (y < game->map_height)
	{
		x = 0;
		while (x < game->map_width)
		{
			if (game->map[y][x] == 'P')
			{
				game->player_x = x;
				game->player_y = y;
				return ;
			}
			x++;
		}
		y++;
	}
}