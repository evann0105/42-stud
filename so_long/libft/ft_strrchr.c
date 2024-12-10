/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:21:55 by emgret            #+#    #+#             */
/*   Updated: 2024/10/07 10:53:59 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
		i++;
	if (c == '\0')
		return (&ptr[i]);
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "hello world";
	char *ptr;
	int c = 'o';

	char s2[] = "hello world";
	char *ptr2;
	int c2 = 'o';

	ptr = strrchr(s, c);
	ptr2 = ft_strrchr(s2, c2);
	printf("le dernier caractere %c dans %s est %s\n", c, s, ptr);
	printf("-------------------\n");
	printf("le dernier caractere %c dans %s est %s\n", c2, s2, ptr2);
	return (0);
} */