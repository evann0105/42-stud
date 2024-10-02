/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:22:45 by emgret            #+#    #+#             */
/*   Updated: 2024/10/01 11:26:01 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* #include <strings.h>
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    
    ft_bzero(str, 5);
    printf("%s\n", str);
	printf("---------------\n");
	bzero(str, 5);
	printf("%s\n", str);

    return 0;
} */