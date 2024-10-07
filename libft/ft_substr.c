/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:57:57 by emgret            #+#    #+#             */
/*   Updated: 2024/10/07 10:12:38 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rtn;

	if ((int)start >= ft_strlen((char *)s))
	{
		rtn = malloc(sizeof(char));
		if (rtn == NULL)
			return (NULL);
		rtn[0] = '\0';
		return (rtn);
	}
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	rtn = malloc(sizeof(char) * (len + 1));
	if (rtn == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rtn[i] = s[start + i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

/* #include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = ft_substr("hello world!", 3, 7);
	printf("%s\n", ptr);
	free (ptr);
	return (0);
} */
