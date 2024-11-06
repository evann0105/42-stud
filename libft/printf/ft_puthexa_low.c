/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:54:36 by emgret            #+#    #+#             */
/*   Updated: 2024/10/23 13:08:25 by emgret           ###   ########.fr       */
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

size_t	ft_puthexa_low(unsigned int x)
{
	size_t	len;

	len = count(x);
	if (x / 16)
		ft_puthexa_low(x / 16);
	ft_putchar("0123456789abcdef"[x % 16]);
	return (len);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned int	hex = -3345;
	unsigned int	mon_hex = -3345;

	printf("%x\n", hex);
	ft_puthexa_low(mon_hex);
	return (0);
} */
