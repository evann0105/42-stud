/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:30:42 by emgret            #+#    #+#             */
/*   Updated: 2024/09/11 12:55:51 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0' && argv[2][n] > 1 && argv[3][n] > 1)
	{
		if (argv[1][i] == argv[2][n])
		{
			argv[1][i] = argv[3][n];
		}
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}