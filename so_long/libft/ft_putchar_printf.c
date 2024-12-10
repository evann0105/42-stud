/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:46:49 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:05:49 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_printf(const char c)
{
	return (write(1, &c, 1));
}