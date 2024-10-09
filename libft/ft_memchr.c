/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:23:23 by emgret            #+#    #+#             */
/*   Updated: 2024/10/09 09:39:28 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "hello world";
	int c = '\0';
	char *ptr;

	char s2[] = "hello world";
	int c2 = '\0';
	char *ptr2;

	ptr = memchr(s, c, 11);
	ptr2 = ft_memchr(s2, c2, 11);
	printf("%s\n", ptr);
	printf("-------------\n");
	printf("%s\n", ptr2);
	return (0);
} */
