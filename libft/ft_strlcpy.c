/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 07:30:50 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 08:33:38 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && dst[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>
#include <string.h>
int main() 
{
	char		dest[10];
	const char	*src = "Hello, World!";

	size_t result = strlcpy(dest, src, sizeof(dest));

	printf("Chaîne copiée : %s\n", dest);
	printf("Longueur de la source : %zu\n", result);
	printf("---------------\n");
	size_t result2 = ft_strlcpy(dest, src, sizeof(dest));
	printf("Chaîne copiée : %s\n", dest);
	printf("Longueur de la source : %zu\n", result2);

	return 0;
} */