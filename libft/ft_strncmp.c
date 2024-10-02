/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:53:10 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 13:19:14 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	int result;
	int result2;

	result = strncmp("apple", "apple", 3);
	result2 = ft_strncmp("apple", "apple", 3);
	printf("%d\n", result);
	printf("-------------\n");
	printf("%d\n", result2);
	return (0);
} */