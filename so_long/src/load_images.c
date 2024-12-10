/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:55:51 by emgret            #+#    #+#             */
/*   Updated: 2024/12/07 14:00:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_images(t_game *game)
{
	int	img_width;
	int	img_height;

	game->wall_img = mlx_xpm_file_to_image(game->mlx, "assets/wall.xpm",
			&img_width, &img_height);
	if (!game->wall_img)
		ft_printf("Error\nFailed to load wall image\n");
	game->floor_img = mlx_xpm_file_to_image(game->mlx, "assets/floor.xpm",
			&img_width, &img_height);
	if (!game->floor_img)
		ft_printf("Error\nFailed to load floor image\n");
	game->player_img = mlx_xpm_file_to_image(game->mlx, "assets/player.xpm",
			&img_width, &img_height);
	if (!game->player_img)
		ft_printf("Error\nFailed to load player image\n");
	game->collectible_img = mlx_xpm_file_to_image(game->mlx,
			"assets/collectible.xpm", &img_width, &img_height);
	if (!game->collectible_img)
		ft_printf("Error\nFailed to load collectible image\n");
	game->exit_img = mlx_xpm_file_to_image(game->mlx, "assets/exit.xpm",
			&img_width, &img_height);
	if (!game->exit_img)
		ft_printf("Error\nFailed to load exit image\n");
}
