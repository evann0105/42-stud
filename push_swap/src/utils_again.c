/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_again.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:30:47 by emgret            #+#    #+#             */
/*   Updated: 2025/01/28 18:46:25 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**initialize_all_args(int argc, int *test)
{
	char	**all_args;

	all_args = malloc(sizeof(char *) * (argc * 10));
	if (!all_args)
		exit_mess();
	ft_bzero(test, sizeof(int) * (argc * 10));
	return (all_args);
}

int	proc_argument(char *arg, char **all_args, int *test, int *total_args)
{
	char	**split_args;
	int		k;

	k = 0;
	if (!check_multiple_spaces(arg))
		exit_mess();
	split_args = ft_split(arg, ' ');
	while (split_args[k])
	{
		if (!is_valid_argument(split_args[k], test))
		{
			free_split(split_args);
			free(all_args);
			exit_mess();
		}
		if (add_argument(split_args[k], all_args, test, total_args) == 0)
		{
			free_split(split_args);
			free(all_args);
			exit_mess();
		}
		k++;
	}
	free_split(split_args);
	return (1);
}

int	is_valid_argument(char *arg, int *test)
{
	if (!arg || ft_strlen(arg) == 0)
		exit_mess();
	if (is_digit(arg) == 1)
	{
		if (arg[0] == '+' || arg[0] == '0')
			remove_plus(arg);
		if (check_double(arg, test) == 1 && check_min_max(arg) == 1)
			return (1);
	}
	return (0);
}

int	add_argument(char *arg, char **all_args, int *test, int *total_args)
{
	if (check_double(arg, test) == 1)
	{
		test[*total_args] = ft_atoi(arg);
		all_args[*total_args] = ft_strdup(arg);
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
		free(all_args);
	}
}
