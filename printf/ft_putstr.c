/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:35:59 by emgret            #+#    #+#             */
/*   Updated: 2024/10/21 11:46:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(const char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		write(1, str++, 1);
	return (0);
}

/* int	main(void)
{
	char	*str = "hello world !";

	ft_putstr(str);
	return (0);
} */
