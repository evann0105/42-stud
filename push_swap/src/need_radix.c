/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   need_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:57:32 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:22:04 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	copy_stack(int *dest, int *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

void	replace_with_indices(int *stack, int *sorted, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack[i] == sorted[j])
			{
				stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	handle_stack_a(int *stack_a, int *size_a, int bit, int *moves_a)
{
	if ((stack_a[0] >> bit) & 1)
	{
		ra(stack_a, *size_a);
		(*moves_a)++;
	}
}

void	handle_stack_b(t_stack *a, t_stack *b, int *moves)
{
	pb(a->stack, a->size, b->stack, b->size);
	(*moves)++;
	if (*(b->size) > 1 && b->stack[0] < b->stack[1])
		rb(b->stack, *(b->size));
}

void	undo_moves(int *stack, int si, int mo, void (*reverse_op)(int *, int))
{
	int	k;

	if (mo > (si / 2))
	{
		k = 0;
		while (k < (si - mo))
		{
			reverse_op(stack, si);
			k++;
		}
	}
}
