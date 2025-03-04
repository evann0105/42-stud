/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:16:55 by emgret            #+#    #+#             */
/*   Updated: 2025/03/02 11:29:02 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

int	correct_arg(int argc)
{
	if (argc == 5)
		return (1);
	else
		exit_mess("veuillez entrer ./pipex input.txt cmd1 cmd2 output.txt");
	return (0);
}
