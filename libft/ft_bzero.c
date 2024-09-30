/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:22:45 by emgret            #+#    #+#             */
/*   Updated: 2024/09/24 17:36:10 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n && ptr[i] != '\0')
	{
		ptr[i] = '0';
		i++;
	}
}

/* 
#include <stdio.h>
int	main(void)
{
	char s[] = "hello je suis la";
	ft_bzero(s, 8);
	printf("%s\n", s);
	return (0);
} */