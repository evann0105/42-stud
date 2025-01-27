/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:36:14 by emgret            #+#    #+#             */
/*   Updated: 2025/01/27 20:25:18 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		total_args;
	char	**all_args;
	int		*test;
	int		*stack_b;
	int		size_b;

	total_args = 0;
	if (argc > 1)
	{
		test = malloc(sizeof(int) * argc * 10);
		if (!test)
			exit_mess();
		stack_b = malloc(sizeof(int) * argc * 10);
		if (!stack_b)
		{
			free(test);
			exit_mess();
		}
		size_b = 0;
		all_args = initialize_all_args(argc, test);
		i = 1;
		while (i < argc)
		{
			if (argv[i][0] == ' ' && (argv[i][1] < '0' || argv[i][1] > '9'))
				exit_mess();
			if (proc_argument(argv[i], all_args, test, &total_args) == 0)
				return (0);
			i++;
		}
		if (total_args <= 3)
			sort_three(test, total_args);
		else if (total_args == 4 || total_args == 5)
			sort_five(test, &total_args, stack_b, &size_b);
		else
			radix_sort(test, &total_args, stack_b, &size_b);
		free_all(all_args, total_args);
		free(test);
	}
	return (0);
}
