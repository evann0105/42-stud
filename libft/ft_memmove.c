/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:31:45 by emgret            #+#    #+#             */
/*   Updated: 2024/10/04 15:30:33 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	ptr = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (ptr2 < ptr)
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr[i] = ptr2[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr[i] = ptr2[i];
			i++;
		}
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[] = "hello world !";
	char src[] = "hello warld !";

	char dst2[] = "hello world !";
	char src2[] = "hello world !";
	
	ft_memmove(dst, src, 10);
	printf("%s\n", dst);
	printf("----------------\n");
	memmove(dst2, src2, 10);
	printf("%s\n", dst2);
	return (0);
} */