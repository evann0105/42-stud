/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:32:45 by emgret            #+#    #+#             */
/*   Updated: 2024/10/23 13:08:19 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count(unsigned int x)
{
	size_t	len;

	len = 0;
	if (x == 0)
		len = 1;
	while (x != 0)
	{
		x /= 16;
		len++;
	}
	return (len);
}

size_t	ft_puthexa_upp(unsigned int x)
{
	size_t	len;

	len = count(x);
	if (x / 16)
		ft_puthexa_upp(x / 16);
	ft_putchar("0123456789ABCDEF"[x % 16]);
	return (len);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned int	hex = 3345;
	unsigned int	mon_hex = 3345;

	printf("%X\n", hex);
	ft_puthexa_upp(mon_hex);
	return (0);
} */