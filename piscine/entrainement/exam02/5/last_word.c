/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:58:11 by emgret            #+#    #+#             */
/*   Updated: 2024/09/13 09:02:04 by emgret           ###   ########.fr       */
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

	// Vérifie s'il y a exactement 1 argument
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}

	// Trouve la fin de la chaîne
	i = 0;
	while (argv[1][i] != '\0')
		i++;

	// Ignore les espaces ou tabulations à la fin de la chaîne
	i--;
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;

	// Si après avoir enlevé les espaces il n'y a plus de caractères
	if (i < 0)
	{
		ft_putchar('\n');
		return (0);
	}

	// Cherche le début du dernier mot
	while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
		i--;

	// Imprime le dernier mot
	i++;
	while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
