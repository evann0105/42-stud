/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:44:12 by emgret            #+#    #+#             */
/*   Updated: 2024/10/03 11:28:43 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&ptr[i]);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[] = "hello world";
	int	c = 'i';
	char *ptr;

	char	s2[] = "hello world";
	int c2 = 'i';
	char *ptr2;
	ptr = strchr(s, c);
	printf("le premier caractere %c dans %s est %s\n", c, s, ptr);
	printf("----------------------------\n");
	ptr2 = ft_strchr(s2, c2);
	printf("le premier caractere %c dans %s est %s\n", c2, s2, ptr2);
	return (0);
} */