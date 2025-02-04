/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:28:06 by emgret            #+#    #+#             */
/*   Updated: 2025/02/04 16:29:05 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(int *stack_a, int size_a)
{
	if (size_a != 3)
		return ;
	if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
	{
		sa(stack_a, size_a);
		rra(stack_a, size_a);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2])
		ra(stack_a, size_a);
	else if (stack_a[1] > stack_a[2] && stack_a[0] < stack_a[2])
	{
		sa(stack_a, size_a);
		ra(stack_a, size_a);
	}
	else if (stack_a[0] > stack_a[1])
		sa(stack_a, size_a);
	else if (stack_a[1] > stack_a[2])
		rra(stack_a, size_a);
}
