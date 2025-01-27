/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:03:17 by emgret            #+#    #+#             */
/*   Updated: 2025/01/27 20:20:45 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(int *stack, int size)
{
	if (size != 3)
		return ;
	if (stack[0] > stack[1] && stack[0] > stack[2])
		rotate(stack, size);
	if (stack[1] > stack[0] && stack[1] > stack[2])
		reverse_rotate(stack, size);
	if (stack[0] > stack[1])
		sa_swap(stack, size);
}

void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	while (*size_a > 3)
	{
		push(stack_a, size_a, stack_b, size_b);
	}
	sort_three(stack_a, *size_a);
	while (*size_b > 0)
	{
		push(stack_b, size_b, stack_a, size_a);
	}
}

void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	count;

	max_num = *size_a;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		count = *size_a;
		while (count--)
		{
			if (((stack_a[0] >> i) & 1) == 1)
				rotate(stack_a, *size_a);
			else
				push(stack_a, size_a, stack_b, size_b);
		}
		while (*size_b > 0)
			push(stack_b, size_b, stack_a, size_a);
		i++;
	}
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
