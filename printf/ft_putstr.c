/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:35:59 by emgret            #+#    #+#             */
/*   Updated: 2024/10/23 11:25:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		write(1, str++, 1);
		len++;
	}
	return (len);
}

/* int	main(void)
{
	char	*str = "hello world !";

	ft_putstr(str);
	return (0);
} */
