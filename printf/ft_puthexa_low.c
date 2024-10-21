/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:54:36 by emgret            #+#    #+#             */
/*   Updated: 2024/10/21 11:12:07 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexa_low(unsigned long int x)
{
	if (x / 16)
		ft_puthexa_low(x / 16);
	ft_putchar("0123456789abcdef"[x % 16]);
	return ((size_t)x);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned int	hex = 3345;
	unsigned int	mon_hex = 3345;

	printf("%x\n", hex);
	ft_puthexa_low(mon_hex);
	return (0);
} */
