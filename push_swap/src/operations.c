/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:10:24 by emgret            #+#    #+#             */
/*   Updated: 2025/02/04 16:26:56 by emgret           ###   ########.fr       */
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
		for (i = 0; i < size - 1; i++) {
			stack[i] = stack[i + 1];
		}
		stack[size - 1] = temp;
	}
}

void	reverse_rotate(int *stack, int size)
{
	int	temp;
	int	i;

	if (size > 1)
	{
		temp = stack[size - 1];
		for (i = size - 1; i > 0; i--)
		{
			stack[i] = stack[i - 1];
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

void	rrb(int *stack_b, int size_b)
{
	reverse_rotate(stack_b, size_b);
	printf("rrb\n");
}

void	rrr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	reverse_rotate(stack_a, size_a);
	reverse_rotate(stack_b, size_b);
	printf("rrr\n");
}

void pb(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	if (*size_a > 0)
	{
		for (int i = *size_b; i > 0; i--)
			stack_b[i] = stack_b[i - 1];

		stack_b[0] = stack_a[0];

		for (int i = 0; i < *size_a - 1; i++)
			stack_a[i] = stack_a[i + 1];

		(*size_b)++;
		(*size_a)--;

		printf("pb\n");
	}
}

void pa(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	if (*size_b > 0)
	{
		for (int i = *size_a; i > 0; i--)
			stack_a[i] = stack_a[i - 1];

		stack_a[0] = stack_b[0];

		for (int i = 0; i < *size_b - 1; i++)
			stack_b[i] = stack_b[i + 1];

		(*size_a)++;
		(*size_b)--;

		printf("pa\n");
	}
}

