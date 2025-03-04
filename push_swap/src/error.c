/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:07:54 by emgret            #+#    #+#             */
/*   Updated: 2025/02/18 23:24:35 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(char *argv, int *test, int size)
{
	int	i;
	int	num;

	if (!test)
		return (0);
	num = ft_atoi(argv);
	i = 0;
	while (i < size)
	{
		if (test[i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_min_max(char *argv)
{
	long long	value;

	if (!is_digit(argv))
		return (0);
	value = ft_atoi_s(argv);
	if (value > 2147483647 || value < -2147483648)
		return (0);
	return (1);
}

int	is_sorted(int *stack, int size)
{
	int	i;

	i = 0;
	if (size <= 1)
		return (1);
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	exit_mess(void)
{
	ft_printf("Error\n");
	exit(0);
}
