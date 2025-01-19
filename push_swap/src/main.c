/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:36:14 by emgret            #+#    #+#             */
/*   Updated: 2025/01/18 17:30:23 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		test[argc * 10];
	char	**split_args;
	int		k;

	i = 1;
	j = 0;
	ft_bzero(test, sizeof(test));

	if (argc > 1)
	{
		while (i < argc)
		{
			split_args = ft_split(argv[i], ' ');
			k = 0;
			while (split_args[k])
			{
				if (is_digit(split_args[k]) == 1)
				{
					if (split_args[k][0] == '+' || split_args[k][0] == '0')
						remove_plus(split_args[k]);
					if (check_double(split_args[k], test) == 1)
					{
						test[j] = ft_atoi(split_args[k]);
						j++;
					}
					else
					{
						free_split(split_args);
						exit_mess();
					}
					if (check_min_max(split_args[k]) == 0)
					{
						free_split(split_args);
						exit_mess();
					}
				}
				else
				{
					free_split(split_args);
					exit_mess();
				}
				k++;
			}
			free_split(split_args);
			i++;
		}
	}
	return (0);
}
