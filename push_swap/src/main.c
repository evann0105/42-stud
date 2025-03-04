/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:36:14 by emgret            #+#    #+#             */
/*   Updated: 2025/02/18 23:24:19 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_numbers(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ')
			&& (str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
			count++;
		i++;
	}
	return (count);
}

int	count_total_numbers(int argc, char **argv)
{
	int	total;
	int	i;

	total = 0;
	i = 1;
	while (i < argc)
	{
		total += count_numbers(argv[i]);
		i++;
	}
	return (total);
}

void	fill_test_array(int argc, char **argv, int *test)
{
	int		index;
	int		i;
	char	*copy;
	char	*token;

	index = 0;
	i = 1;
	while (i++ < argc)
	{
		copy = ft_strdup(argv[i - 1]);
		if (!copy)
		{
			ft_printf("Erreur d'allocation mémoire !\n");
			free(test);
			exit(1);
		}
		token = ft_strtok(copy, " ");
		while (token)
		{
			test[index] = ft_atoi(token);
			index++;
			token = ft_strtok(NULL, " ");
		}
		free(copy);
	}
}

void	process_arguments(int argc, char **argv, int **test, int *total_args)
{
	char	**all_args;
	int		i;
	int		test_index;

	test_index = 0;
	*total_args = count_total_numbers(argc, argv);
	*test = malloc(sizeof(int) * (*total_args));
	if (!(*test))
		exit(1);
	all_args = initialize_all_args(*total_args);
	if (!all_args)
		exit(1);
	i = 1;
	while (i < argc)
	{
		if (!proc_argument(argv[i], all_args, *test, &test_index))
		{
			free(*test);
			free_all(all_args, test_index);
			exit_mess();
		}
		i++;
	}
	free_all(all_args, test_index);
}

int	main(int argc, char **argv)
{
	int		*test;
	int		total_args;

	if (argc > 1)
	{
		process_arguments(argc, argv, &test, &total_args);
		to_sort(total_args, test, NULL);
		if (test)
			free(test);
	}
	return (0);
}
