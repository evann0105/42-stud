/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:15:31 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 14:26:40 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[] = "hello";
	const char src[] = "ahh";

	char dst2[] = "hello";
	const char src2[] = "ahh";
	
	ft_memcpy(dst, src, 6);
	printf("%s\n", dst);
	printf("%lu\n", sizeof(dst));
	printf("-----------\n");
	memcpy(dst2, src2, 6);
	printf("%s\n", dst2);
	printf("%lu\n", sizeof(dst2));
	return (0);
} */
