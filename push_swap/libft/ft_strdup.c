/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:36:28 by emgret            #+#    #+#             */
/*   Updated: 2024/10/09 11:47:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*rtn;

	i = 0;
	rtn = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (rtn == NULL)
		return (NULL);
	while (s[i])
	{
		rtn[i] = (char)s[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

/* #include <stdio.h>
int	main(void)
{
	char	*s;
	char	*cpy;

	s = "hello world";
	cpy = ft_strdup(s);
	printf("%s\n", cpy);
	free (cpy);
	return (0);
} */