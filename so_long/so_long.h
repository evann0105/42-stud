/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:17:59 by emgret            #+#    #+#             */
/*   Updated: 2024/12/16 15:26:37 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include "./mlx/mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
	char	**map;
	int		map_width;
	int		map_height;
	int		player_x;
	int		player_y;
	int		player_count;
	int		exit_count;
	int		collectible_count;
	int		moves;
	void	*wall_img;
	void	*floor_img;
	void	*player_img;
	void	*collectible_img;
	void	*exit_img;
}	t_game;

typedef struct s_flood_data
{
	char	**map;
	int		*collectible_count;
	int		*exit_count;
	t_game	*game;
}	t_flood_data;

void	validate_map_file(const char *filename, t_game *game);
void	move_player(t_game *game, int dx, int dy);
void	render_game(t_game *game);
int		handle_keypress(int key, t_game *game);
t_game	*init_game(void);
void	create_window(t_game *game);
void	load_map(t_game *game, const char *filename);
void	free_map(t_game *game);
void	load_images(t_game *game);
void	exit_game(t_game *game);
void	validate_borders(char *line, int line_number, int total_lines, int len);
void	find_player_position(t_game *game);
void	strip_newline(char *line);
void	update_counts(char c, t_game *counts);
void	exit_message(const char *message);
void	check_new(t_game *game, int new_x, int new_y);
void	check_path_validity(t_game *game);
void	render_tile(t_game *game, int x, int y);

#endif