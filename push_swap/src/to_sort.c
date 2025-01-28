/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:46:47 by emgret            #+#    #+#             */
/*   Updated: 2025/01/28 18:20:18 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_sort(int total_args, int *test, char	**all_args, int argc)
{
	int		*stack_b;
	int		size_b;

	stack_b = malloc(sizeof(int) * argc * 10);
	if (!stack_b)
	{
		free(test);
		exit_mess();
	}
	size_b = 0;
	if (total_args <= 3)
		sort_three(test, total_args);
	else if (total_args == 4 || total_args == 5)
		sort_five(test, &total_args, stack_b, &size_b);
	else
		radix_sort(test, &total_args, stack_b, &size_b);
	free_all(all_args, total_args);
	free(test);
}
