/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:13:57 by emgret            #+#    #+#             */
/*   Updated: 2025/02/18 23:24:58 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_min_index(int *stack, int size)
{
	int	min_idx;
	int	i;

	min_idx = 0;
	i = 1;
	while (i < size)
	{
		if (stack[i] < stack[min_idx])
			min_idx = i;
		i++;
	}
	return (min_idx);
}

static void	move_min_to_top(int *stack_a, int size_a)
{
	int	min_idx;

	min_idx = find_min_index(stack_a, size_a);
	while (min_idx > 0)
	{
		if (min_idx <= size_a / 2)
			ra(stack_a, size_a);
		else
			rra(stack_a, size_a);
		min_idx = find_min_index(stack_a, size_a);
	}
}

void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	move_min_to_top(stack_a, *size_a);
	pb(stack_a, size_a, stack_b, size_b);
	if (*size_a == 4)
	{
		move_min_to_top(stack_a, *size_a);
		pb(stack_a, size_a, stack_b, size_b);
	}
	sort_three(stack_a, *size_a);
	pa(stack_a, size_a, stack_b, size_b);
	if (*size_b > 0)
		pa(stack_a, size_a, stack_b, size_b);
}
