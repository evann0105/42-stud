/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:52:06 by emgret            #+#    #+#             */
/*   Updated: 2024/10/01 10:54:58 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 'c';
	int result1 = ft_isdigit(c);
	int result2 = isdigit(c);
	
	printf("%d\n", result1);
	printf("-----------\n");
	printf("%d\n", result2);
	return (0);
} */