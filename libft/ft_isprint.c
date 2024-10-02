/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:52:04 by emgret            #+#    #+#             */
/*   Updated: 2024/10/01 10:50:52 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 'c';
	
	int result1 = ft_isprint(c);
	int result2 = isprint(c);
	printf("%d\n", result1);
	printf("-------------\n");
	printf("%d\n", result2);
	
	return (0);
} */