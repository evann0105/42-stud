/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:16:16 by emgret            #+#    #+#             */
/*   Updated: 2025/03/02 11:54:19 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	exit_mess(char *str)
{
	char	*err;

	err = strerror(errno);
	write(2, str, ft_strlen(str));
	write(2, ": ", 2);
	write(2, err, ft_strlen(err));
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}
