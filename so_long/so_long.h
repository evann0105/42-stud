/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:17:59 by emgret            #+#    #+#             */
/*   Updated: 2024/12/10 16:35:46 by emgret           ###   ########.fr       */
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
	// Images pour les éléments
	void	*wall_img;
	void	*floor_img;
	void	*player_img;
	void	*collectible_img;
	void	*exit_img;
}	t_game;

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
void	validate_borders(char *line, int line_number, int first_line_length);
void	find_player_position(t_game *game);
void	strip_newline(char *line);
void	update_counts(char c, t_game *counts);
void	exit_message(const char *message);

#endif