/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:03:17 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:17:33 by emgret           ###   ########.fr       */
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

static void	normalize_values(int *stack, int size)
{
	int	*sorted;

	sorted = malloc(size * sizeof(int));
	if (!sorted)
		return ;
	copy_stack(sorted, stack, size);
	my_qsort(sorted, size);
	replace_with_indices(stack, sorted, size);
	free(sorted);
}

static void	denormalize_values(int *stack, int size, int min)
{
	int	i;

	if (min < 0)
	{
		i = 0;
		while (i < size)
		{
			stack[i] += min;
			i++;
		}
	}
}

static void	radix_pass(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int		i;
	int		max_bits;
	t_stack	sa;
	t_stack	sb;

	sa.stack = stack_a;
	sa.size = size_a;
	sa.moves = 0;
	sb.stack = stack_b;
	sb.size = size_b;
	sb.moves = 0;
	max_bits = get_max_bits(stack_a, *size_a);
	i = 0;
	while (i < max_bits)
	{
		process_bit_pass(&sa, &sb, i);
		i++;
	}
}

void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	min;
	int	k;

	min = stack_a[0];
	k = 1;
	while (k < *size_a)
	{
		if (stack_a[k] < min)
			min = stack_a[k];
		k++;
	}
	normalize_values(stack_a, *size_a);
	radix_pass(stack_a, size_a, stack_b, size_b);
	denormalize_values(stack_a, *size_a, min);
}
