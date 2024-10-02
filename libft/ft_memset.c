/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:58:40 by emgret            #+#    #+#             */
/*   Updated: 2024/10/02 14:20:21 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "hello";
	ft_memset(s, '*', 3);
	printf("%s\n", s);
	printf("--------------\n");
	memset(s,'*', 3);
	printf("%s\n", s);
	return 0;
} */