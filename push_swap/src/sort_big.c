/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:03:17 by emgret            #+#    #+#             */
/*   Updated: 2025/02/04 17:11:57 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_max_bits(int *stack, int size)
{
	int	max;
	int	bits;
	int	i;

	max = stack[0];
	bits = 0;
	i = 1;
	while (i < size)
	{
		if (stack[i] > max)
			max = stack[i];
		i++;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	max_bits = get_max_bits(stack_a, *size_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		size = *size_a;
		while (j < size)
		{
			if ((stack_a[0] >> i) & 1)
				ra(stack_a, *size_a);
			else
				pb(stack_a, size_a, stack_b, size_b);
			j++;
		}
		while (*size_b > 0)
			pa(stack_a, size_a, stack_b, size_b);
		i++;
	}
}


