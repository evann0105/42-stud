/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapet_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:28:10 by emgret            #+#    #+#             */
/*   Updated: 2024/09/11 11:30:04 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int cnt;
	int nb;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		cnt = 0;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			nb = argv[1][i];
			nb -= 96;
			while (cnt < nb)
			{
				ft_putchar(argv[1][i]);
				cnt++;
			}
		}
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			nb = argv[1][i];
			nb -= 64;
			while (cnt < nb)
			{
				ft_putchar(argv[1][i]);
				cnt++;
			}
		}
		i++;
	}
	return (0);
}