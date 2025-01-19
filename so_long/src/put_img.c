/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:00:35 by emgret            #+#    #+#             */
/*   Updated: 2025/01/06 09:57:28 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_tile(t_game *game, int x, int y)
{
	char	tile;

	tile = game->map[y][x];
	if (tile == '1')
		mlx_put_image_to_window(game->mlx, game->win, game->wall_img,
			x * 32, y * 32);
	else if (tile == '0')
		mlx_put_image_to_window(game->mlx, game->win, game->floor_img,
			x * 32, y * 32);
	else if (tile == 'P')
		mlx_put_image_to_window(game->mlx, game->win, game->player_img,
			x * 32, y * 32);
	else if (tile == 'C')
		mlx_put_image_to_window(game->mlx, game->win, game->collectible_img,
			x * 32, y * 32);
	else if (tile == 'E')
		mlx_put_image_to_window(game->mlx, game->win, game->exit_img,
			x * 32, y * 32);
}

void	render_game(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (y < game->map_height)
	{
		x = 0;
		while (x < game->map_width)
		{
			render_tile(game, x, y);
			x++;
		}
		y++;
	}
}
