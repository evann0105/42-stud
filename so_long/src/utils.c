/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:55:22 by emgret            #+#    #+#             */
/*   Updated: 2024/12/11 10:54:10 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	update_counts(char c, t_game *game)
{
	if (c == 'P')
		game->player_count++;
	else if (c == 'E')
		game->exit_count++;
	else if (c == 'C')
		game->collectible_count++;
}

void	exit_message(const char *message)
{
	if (message)
	{
		write(2, message, ft_strlen(message));
		write(2, "\n", 1);
	}
	exit(EXIT_FAILURE);
}
