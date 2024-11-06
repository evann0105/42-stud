/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:22:45 by emgret            #+#    #+#             */
/*   Updated: 2024/09/10 09:50:46 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar4(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = 0;
	while (nb1 <= 7)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 8)
		{
			nb3 = nb2 + 1;
			while (nb3 <= 9)
			{
				ft_putchar4(nb1 + '0');
				ft_putchar4(nb2 + '0');
				ft_putchar4(nb3 + '0');
				if (nb1 != 7)
					write(1, ", ", 2);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return (0);
}*/