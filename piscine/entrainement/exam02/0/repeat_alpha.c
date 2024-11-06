/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:11:41 by emgret            #+#    #+#             */
/*   Updated: 2024/09/12 09:20:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int	nb;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		count = 0;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			nb = argv[1][i];
			nb -= 96;
			while (count < nb)
			{
				ft_putchar(argv[1][i]);
				count++;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			nb = argv[1][i];
			nb -= 64;
			while (count < nb)
			{
				ft_putchar(argv[1][i]);
				count++;
			}
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}