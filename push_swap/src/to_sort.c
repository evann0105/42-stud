/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:47 by emgret            #+#    #+#             */
/*   Updated: 2025/02/05 13:51:32 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_sort(int total_args, int *stack_a, char **all_args, int argc)
{
	int	*stack_b;
	int	size_b;
	int	size_a;

	stack_b = malloc(sizeof(int) * (argc - 1));
	if (!stack_b)
	{
		free(stack_a);
		exit_mess();
	}
	size_b = 0;
	size_a = total_args;
	if (total_args == 2 && stack_a[0] > stack_a[1])
		sa(stack_a, size_a);
	else if (total_args == 3)
		sort_three(stack_a, total_args);
	else if (total_args == 4 || total_args == 5)
		sort_five(stack_a, &size_a, stack_b, &size_b);
	else
		radix_sort(stack_a, &size_a, stack_b, &size_b);
	free_all(all_args, total_args);
	free(stack_b);
}

