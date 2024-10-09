/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:08:11 by emgret            #+#    #+#             */
/*   Updated: 2024/10/09 12:54:09 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, count * size);
	return (arr);
}

/* #include <stdio.h>
int main() 
{
	int	*arr;
	int	n = 5;

	int	*arr2;
	int	n2 = 5;

	arr = (int*) calloc(n, sizeof(int));
	arr2 = (int*) ft_calloc(n2, sizeof(int));
	if (arr == NULL)
	{
		printf("Échec de l'allocation de mémoire\n");
		return (1);
	}
	if (arr2 == NULL)
	{
		printf("Échec de l'allocation de mémoire\n");
		return (1);
	}
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("----------------\n");
	for (int j = 0; j < n; j++)
	{
		printf("arr[%d] = %d\n", j, arr2[j]);
	}
	free(arr);
	free(arr2);
	return (0);
} */