/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:57:01 by emgret            #+#    #+#             */
/*   Updated: 2025/02/14 13:13:43 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(int *stack, int size)
{
	int	temp;
	int	i;

	if (size > 1)
	{
		temp = stack[size - 1];
		i = size - 1;
		while (i > 0)
		{
			stack[i] = stack[i - 1];
			i--;
		}
		stack[0] = temp;
	}
}

void	ra(int *stack_a, int size_a)
{
	rotate(stack_a, size_a);
	printf("ra\n");
}

void	rb(int *stack_b, int size_b)
{
	rotate(stack_b, size_b);
	printf("rb\n");
}

void	rr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	rotate(stack_a, size_a);
	rotate(stack_b, size_b);
	printf("rr\n");
}

void	rra(int *stack_a, int size_a)
{
	reverse_rotate(stack_a, size_a);
	printf("rra\n");
}
