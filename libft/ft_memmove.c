/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:31:45 by emgret            #+#    #+#             */
/*   Updated: 2024/09/29 18:43:48 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (i < len && ptr[i] != '\0')
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
int	main(void)
{
	char dst[] = "hello world !";
	char src[] = "hallo world !";
	
	ft_memmove(dst, src, 5);
	printf("%s\n", dst);
	return (0);
} */