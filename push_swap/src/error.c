/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:07:54 by emgret            #+#    #+#             */
/*   Updated: 2025/02/14 13:13:52 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(char *argv, int *test)
{
	int	i;

	i = 0;
	while (test[i])
	{
		if (test[i] == ft_atoi(argv))
			return (0);
		i++;
	}
	return (1);
}

int	check_min_max(char *argv)
{
	long long	value;

	value = ft_atoi_s(argv);
	if (value > 2147483647 || value < -2147483648)
		return (0);
	return (1);
}

/* int	check_multiple_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			return (0);
		i++;
	}
	return (1);
} */

int	is_sorted(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
