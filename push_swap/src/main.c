/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:36:14 by emgret            #+#    #+#             */
/*   Updated: 2025/01/28 18:14:11 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		total_args;
	char	**all_args;
	int		*test;

	total_args = 0;
	if (argc > 1)
	{
		test = malloc(sizeof(int) * argc * 10);
		if (!test)
			exit_mess();
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
		to_sort(total_args, test, all_args, argc);
	}
	return (0);
}
