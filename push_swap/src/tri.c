/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 00:03:17 by emgret            #+#    #+#             */
/*   Updated: 2025/01/15 11:06:32 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fonction_test(char **tab, int taille)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < taille - 1)
	{
		if (strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i++;
	}
}
