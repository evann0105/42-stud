/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:57:01 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:22:45 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(int *stack, int size)
{
	int	temp;

	if (size > 1)
	{
		temp = stack[size - 1];
		ft_memmove(stack + 1, stack, (size - 1) * sizeof(int));
		stack[0] = temp;
	}
}

void	ra(int *stack_a, int size_a)
{
	rotate(stack_a, size_a);
	ft_printf("ra\n");
}

void	rb(int *stack_b, int size_b)
{
	rotate(stack_b, size_b);
	ft_printf("rb\n");
}

void	rr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	rotate(stack_a, size_a);
	rotate(stack_b, size_b);
	ft_printf("rr\n");
}

void	rra(int *stack_a, int size_a)
{
	reverse_rotate(stack_a, size_a);
	ft_printf("rra\n");
}
