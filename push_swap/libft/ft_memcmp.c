/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:37:19 by emgret            #+#    #+#             */
/*   Updated: 2024/10/03 11:18:00 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr[i] != ptr2[i])
			return ((unsigned char)ptr[i] - (unsigned char)ptr2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "apple";
	char s2[] = "apale";

	char s3[] = "apple";
	char s4[] = "apale";
	
	int result = memcmp(s1, s2, 5);
	int result2 = ft_memcmp(s3, s4, 5);
	printf("%d\n", result);
	printf("------------\n");
	printf("%d\n", result2);
	return (0);
} */