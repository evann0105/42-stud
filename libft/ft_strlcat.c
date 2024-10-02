/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:27:31 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 13:52:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[10] = "hello ";
	char src[] = "world";

	char dst2[10] = "hello ";
	char src2[] = "world";

	int result = strlcat(dst, src, sizeof(dst));
	int result2 = ft_strlcat(dst2, src2, sizeof(dst2));
	printf("%d\n", result);
	printf("%s\n", dst);
	printf("-------------------\n");
	printf("%d\n", result2);
	printf("%s\n", dst2);
	return (0);
} */