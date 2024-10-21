/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:42:04 by emgret            #+#    #+#             */
/*   Updated: 2024/10/21 11:16:20 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putadress(void *p)
{
	size_t	count;

	count = 0;
	write(1, "0x", 2);
	count = 2;
	if (p == NULL)
	{
		write (1, "0", 1);
		count++;
	}
	else
	{
		count = count + ft_puthexa_low((unsigned long int)p);
	}
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
	char p = 'c';

	printf("%p\n", &p);
	ft_putadress(&p);
	return (0);
} */