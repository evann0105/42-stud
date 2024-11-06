/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:58:43 by emgret            #+#    #+#             */
/*   Updated: 2024/09/12 10:03:45 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int main(void)
{
	int nb1 = 42;
	int nb2 = 01;

	int *a = &nb1;
	int *b = &nb2;
	
	printf("%d\n", nb1);
	printf("%d\n", nb2);
	ft_swap(a, b);
	printf("%d\n", nb1);
	printf("%d", nb2);
	return (0);
}