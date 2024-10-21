/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:32:45 by emgret            #+#    #+#             */
/*   Updated: 2024/10/21 11:12:44 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexa_upp(unsigned long int x)
{
	if (x / 16)
		ft_puthexa_upp(x / 16);
	ft_putchar("0123456789ABCDEF"[x % 16]);
	return ((size_t)x);
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