/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:05:33 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:05:25 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_printf(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*str)
		i++;
	return (i);
}
