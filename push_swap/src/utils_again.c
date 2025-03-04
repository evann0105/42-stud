/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_again.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:30:47 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 12:37:14 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**initialize_all_args(int argc)
{
	char	**all_args;

	all_args = malloc(sizeof(char *) * (argc * 200));
	if (!all_args)
		exit_mess();
	return (all_args);
}

int	proc_argument(char *arg, char **all_args, int *test, int *total_args)
{
	char	**split_args;
	int		k;

	k = 0;
	split_args = ft_split(arg, ' ');
	while (split_args[k])
	{
		if (ft_strlen(split_args[k]) == 0)
		{
			k++;
			continue ;
		}
		if (!process_single_arg(split_args[k], all_args, test, total_args))
		{
			free_split(split_args);
			if (all_args != NULL)
			{
				free_all(all_args, *total_args);
				all_args = NULL;
			}
			return (0);
		}
		k++;
	}
	return (free_split(split_args), 1);
}

int	is_valid_argument(char *arg, int *test, int *total_args)
{
	if (!arg || ft_strlen(arg) == 0)
		exit_mess();
	if (is_digit(arg) == 1)
	{
		if (arg[0] == '+' || arg[0] == '0')
			remove_plus(arg);
		if (check_double(arg, test, *total_args) == 1
			&& check_min_max(arg) == 1)
			return (1);
	}
	return (0);
}

int	add_argument(char *arg, char **all_args, int *test, int *total_args)
{
	if (check_double(arg, test, *total_args) == 1)
	{
		test[*total_args] = ft_atoi_s(arg);
		all_args[*total_args] = ft_strdup(arg);
		if (!all_args[*total_args])
		{
			ft_printf("all_args[%d] n'a été alloué correct!\n", *total_args);
			exit(1);
		}
		(*total_args)++;
		return (1);
	}
	return (0);
}

void	free_all(char **all_args, int total_args)
{
	int	i;

	i = 0;
	if (all_args != NULL)
	{
		while (i < total_args)
		{
			if (all_args[i] != NULL)
			{
				free(all_args[i]);
				all_args[i] = NULL;
			}
			i++;
		}
		if (all_args)
			free(all_args);
		all_args = NULL;
	}
}
