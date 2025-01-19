/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:56:56 by emgret            #+#    #+#             */
/*   Updated: 2025/01/06 09:57:12 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_keypress(int key, t_game *game)
{
	if (key == 53)
		exit_game(game);
	if (key == 13 || key == 126)
		move_player(game, 0, -1);
	if (key == 1 || key == 125)
		move_player(game, 0, 1);
	if (key == 0 || key == 123)
		move_player(game, -1, 0);
	if (key == 2 || key == 124)
		move_player(game, 1, 0);
	return (0);
}
