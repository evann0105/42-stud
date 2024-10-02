/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:31:00 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 09:40:40 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c == -1)
		return (-1);
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 'H';
	
	int result1 = tolower(c);
	int result2 = ft_tolower(c);
	printf("%d, %c -> %c\n", result1, c, tolower(c));
	printf("------------------------\n");
	printf("%d, %c -> %c\n", result2, c, ft_tolower(c));
} */