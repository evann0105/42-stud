/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:58:10 by emgret            #+#    #+#             */
/*   Updated: 2025/02/18 23:24:26 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(int *stack_b, int size_b)
{
	reverse_rotate(stack_b, size_b);
	ft_printf("rrb\n");
}

void	rrr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	reverse_rotate(stack_a, size_a);
	reverse_rotate(stack_b, size_b);
	ft_printf("rrr\n");
}

void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;

	if (*size_a <= 0)
		return ;
	if (*size_a > 0)
	{
		i = *size_b;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = stack_a[0];
		i = 0;
		while (i < *size_a - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		(*size_b)++;
		(*size_a)--;
		ft_printf("pb\n");
	}
}

void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;

	if (*size_b <= 0)
		return ;
	if (*size_b > 0)
	{
		i = *size_a;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = stack_b[0];
		i = 0;
		while (i < *size_b - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		(*size_a)++;
		(*size_b)--;
		ft_printf("pa\n");
	}
}
