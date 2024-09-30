/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:15:31 by emgret            #+#    #+#             */
/*   Updated: 2024/09/29 18:27:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *ptr;
	const unsigned char *ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	i = 0;
	while (i < n && ptr[i] != '\0')
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
int main(void)
{
	char dst[] = "hello";
	const char src[] = "ahhhhhhh";
	
	ft_memcpy(dst, src, 6);
	printf("%s\n", dst);
	printf("%lu", sizeof(dst));
	return (0);
} */
