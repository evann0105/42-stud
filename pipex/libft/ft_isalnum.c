/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:19:16 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 08:33:15 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = '!';
	int result1 = ft_isalnum(c);
	int result2 = isalnum(c);

	printf("%d\n", result1);
	printf("---------------\n");
	printf("%d\n", result2);
} */