/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:21:20 by emgret            #+#    #+#             */
/*   Updated: 2024/10/01 11:07:00 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	else
		return (1);
}

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c = 'A';
	int result1 = ft_isalpha(c);
	int result2 = isalpha(c);

	printf("%d\n", result1);
	printf("---------------\n");
	printf("%d\n", result2);
} */
