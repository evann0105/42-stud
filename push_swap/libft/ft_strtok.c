/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:08:16 by emgret            #+#    #+#             */
/*   Updated: 2025/02/17 17:14:52 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtok(char *str, const char *delim)
{
	static char	*next_token;
	char		*start;

	next_token = NULL;
	if (str)
		next_token = str;
	else if (!next_token)
		return (NULL);
	while (*next_token && strchr(delim, *next_token))
		next_token++;
	if (!*next_token)
		return (NULL);
	start = next_token;
	while (*next_token && !strchr(delim, *next_token))
		next_token++;
	if (*next_token)
	{
		*next_token = '\0';
		next_token++;
	}
	return (start);
}
