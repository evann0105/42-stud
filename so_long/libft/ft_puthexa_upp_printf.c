/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upp_printf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:32:45 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:15:04 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t	ft_puthexa_upp_printf(unsigned int x)
{
	size_t	len;

	len = count(x);
	if (x / 16)
		ft_puthexa_upp_printf(x / 16);
	ft_putchar_printf("0123456789ABCDEF"[x % 16]);
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