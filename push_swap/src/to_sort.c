/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:47 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:23:28 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	perform_sorting(int total_args, int *stack_a, int *stack_b)
{
	int	size_a;
	int	size_b;

	size_a = total_args;
	size_b = 0;
	if (total_args == 2 && stack_a[0] > stack_a[1])
		sa(stack_a, size_a);
	else if (total_args == 3)
		sort_three(stack_a, total_args);
	else if (total_args == 4 || total_args == 5)
		sort_five(stack_a, &size_a, stack_b, &size_b);
	else
		radix_sort(stack_a, &size_a, stack_b, &size_b);
}

void	to_sort(int total_args, int *stack_a, int *stack_b)
{
	if (!stack_a || total_args <= 0)
	{
		ft_printf("Erreur : Stack A invalide\n");
		return ;
	}
	if (is_sorted(stack_a, total_args))
		return ;
	stack_b = malloc(sizeof(int) * total_args);
	if (!stack_b)
	{
		ft_printf("Erreur d'allocation de Stack B\n");
		free(stack_a);
		exit(1);
	}
	perform_sorting(total_args, stack_a, stack_b);
	free(stack_b);
}
