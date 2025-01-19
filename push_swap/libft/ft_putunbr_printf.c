/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:00:45 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:18:41 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putunbr_printf(const unsigned int n)
{
	if (n / 10)
		return (ft_putunbr_printf(n / 10) + ft_putunbr_printf(n % 10));
	else
		return (ft_putchar_printf(n + '0'));
}
