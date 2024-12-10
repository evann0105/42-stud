/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:42:04 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:16:37 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	printadress(unsigned long n)
{
	if (n / 16)
	{
		return (printadress(n / 16) + printadress(n % 16));
	}
	else if (n < 10)
	{
		ft_putchar_printf(n + '0');
	}
	else
	{
		ft_putchar_printf(n - 10 + 'a');
	}
	return (1);
}

size_t	ft_putadress_printf(void *adress)
{
	if (!adress)
	{
		ft_putstr_printf("0x0");
		return (3);
	}
	ft_putstr_printf("0x");
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