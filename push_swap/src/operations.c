
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:10:24 by emgret            #+#    #+#             */
/*   Updated: 2025/01/27 15:10:24 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_swap(int *stack, int size)
{
	if (size > 1)
	{
		swap(&stack[0], &stack[1]);
		ft_printf("sa\n");
	}
}

void	push(int *src, int *src_size, int *dest, int *dest_size)
{
	int	i;

	i = *dest_size;
	if (*src_size > 0)
	{
		while (i > 0)
		{
			dest[i] = dest[i - 1];
			i--;
		}
		dest[0] = src[0];
		(*dest_size)++;
		i = 0;
		while (i < *src_size - 1)
		{
			src[i] = src[i + 1];
			i++;
		}
		(*src_size)--;
		ft_printf("pb\n");
	}
}

void	rotate(int *stack, int size)
{
	int	temp;
	int	i;

	i = 0;
	if (size > 1)
	{
		temp = stack[0];
		while (i < size - 1)
		{
			stack[i] = stack[i + 1];
			i++;
		}
		stack[size - 1] = temp;
		ft_printf("ra\n");
	}
}

void	reverse_rotate(int *stack, int size)
{
	int	i;
	int	temp;

	i = size - 1;
	if (size > 1)
	{
		temp = stack[size - 1];
		while (i > 0)
		{
			stack[i] = stack[i - 1];
			i--;
		}
		stack[0] = temp;
		ft_printf("rra\n");
	}
}

void	double_operation(void (*op)(int *, int), int *stack_a, int size_a,
						int *stack_b, int size_b)
{
	op(stack_a, size_a);
	op(stack_b, size_b);
	if (op == rotate)
		ft_printf("rr");
	else if (op == reverse_rotate)
		ft_printf("rrr");
	else if (op == sa_swap)
		ft_printf("ss");
}
