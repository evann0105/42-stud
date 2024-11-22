/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:29:35 by emgret            #+#    #+#             */
/*   Updated: 2024/11/22 21:40:34 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
size_t	ft_putchar_printf(const char c);
size_t	ft_putstr_printf(const char *str);
size_t	ft_puthexa_low(unsigned int x);
size_t	ft_puthexa_upp(unsigned int x);
size_t	ft_putnbr_printf(int nb);
size_t	ft_putadress(void *p);
size_t	ft_strlen_printf(const char *str);
size_t	ft_putunbr_printf(const unsigned int n);

#endif