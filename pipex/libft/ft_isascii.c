/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:03:04 by emgret            #+#    #+#             */
/*   Updated: 2024/10/01 11:04:04 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 'd';
	int result1 = ft_isascii(c);
	int result2 = isascii(c);

	printf("%d\n", result1);
	printf("--------------\n");
	printf("%d\n", result2);
} */
