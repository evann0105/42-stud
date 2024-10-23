/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:42:04 by emgret            #+#    #+#             */
/*   Updated: 2024/10/23 13:24:32 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	printadress(unsigned long n)
{
	if (n / 16)
	{
		return (printadress(n / 16) + printadress(n % 16));
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n - 10 + 'a');
	}
	return (1);
}

size_t	ft_putadress(void *adress)
{
	if (!adress)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	return (2 + printadress((unsigned long)adress));
}

/* #include <stdio.h>
int	main(void)
{
	char p = 'c';

	printf("%p\n", &p);
	ft_putadress(&p);
	return (0);
} */