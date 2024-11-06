/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:36:04 by emgret            #+#    #+#             */
/*   Updated: 2024/09/11 13:43:17 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void)
{
	int nb1 = 42;
	int nb2 = 50;
	int *a = &nb1;
	int *b = &nb2;
	printf("%d, %d", nb1, nb2);
	ft_swap(a, b);
	printf("%d, %d", nb1, nb2);
	return (0);
}*/