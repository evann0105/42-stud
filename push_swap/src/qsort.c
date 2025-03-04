/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:49:06 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:22:01 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cmp(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int	partition(int arr[], int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	quick_sort(int arr[], int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}

void	my_qsort(int arr[], int size)
{
	quick_sort(arr, 0, size - 1);
}

void	process_bit_pass(t_stack *sta_a, t_stack *stack_b, int bit)
{
	int	j;
	int	size;

	sta_a->moves = 0;
	stack_b->moves = 0;
	size = *(sta_a->size);
	j = 0;
	while (j < size)
	{
		if ((sta_a->stack[0] >> bit) & 1)
			handle_stack_a(sta_a->stack, sta_a->size, bit, &(sta_a->moves));
		else
			handle_stack_b(sta_a, stack_b, &(stack_b->moves));
		j++;
	}
	undo_moves(sta_a->stack, *(sta_a->size), sta_a->moves, rra);
	undo_moves(stack_b->stack, *(stack_b->size), stack_b->moves, rrb);
	while (*(stack_b->size) > 0)
		pa(sta_a->stack, sta_a->size, stack_b->stack, stack_b->size);
}
