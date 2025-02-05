/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:10:24 by emgret            #+#    #+#             */
/*   Updated: 2025/02/05 13:58:28 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sa(int *stack, int size)
{
	if (size > 1)
	{
		swap(&stack[0], &stack[1]);
		ft_printf("sa\n");
	}
}

void	sb(int *stack, int size)
{
	if (size > 1)
	{
		swap(&stack[0], &stack[1]);
		printf("sb\n");
	}
}

void	ss(int *stack_a, int size_a, int *stack_b, int size_b)
{
	if (size_a > 1 && size_b > 1)
	{
		swap(&stack_a[0], &stack_a[1]);
		swap(&stack_b[0], &stack_b[1]);
		printf("ss\n");
	}
}

void	rotate(int *stack, int size)
{
	int	temp;
	int	i;

	if (size > 1)
	{
		temp = stack[0];
		i = 0;
		while (i < size - 1)
		{
			stack[i] = stack[i + 1];
			i++;
		}
		stack[size - 1] = temp;
	}
}
