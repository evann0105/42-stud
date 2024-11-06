/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:24:42 by emgret            #+#    #+#             */
/*   Updated: 2024/09/12 10:33:56 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'z')
		{
			argv[1][i] = 'a';
			ft_putchar(argv[1][i]);
		}
		else if (argv[1][i] == 'Z')
		{
			argv[1][i] = 'A';
			ft_putchar(argv[1][i]);
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
		{
			argv[1][i] += 1;
			ft_putchar(argv[1][i]);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
		{
			argv[1][i] += 1;
			ft_putchar(argv[1][i]);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}