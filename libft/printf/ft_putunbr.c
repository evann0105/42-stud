/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:00:45 by emgret            #+#    #+#             */
/*   Updated: 2024/11/22 21:39:56 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr_printf(const unsigned int n)
{
	if (n / 10)
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	else
		return (ft_putchar(n + '0'));
}
