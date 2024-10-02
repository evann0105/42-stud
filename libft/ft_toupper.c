/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:26:43 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 09:35:12 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c == -1)
		return (-1);
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c = '9';
	
	int result1 = toupper(c);
	int result2 = ft_toupper(c);

	printf("%d -> %c : %c\n", result1, c, toupper(c));
	printf("----------------\n");
	printf("%d -> %c : %c\n", result2, c, ft_toupper(c));
} */