/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:29:35 by emgret            #+#    #+#             */
/*   Updated: 2024/10/23 13:08:32 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);
size_t	ft_puthexa_low(unsigned int x);
size_t	ft_puthexa_upp(unsigned int x);
size_t	ft_putnbr(int nb);
size_t	ft_putadress(void *p);
size_t	ft_strlen(const char *str);
size_t	ft_putunbr(const unsigned int n);

#endif