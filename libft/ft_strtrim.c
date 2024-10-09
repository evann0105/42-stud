/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:14:03 by emgret            #+#    #+#             */
/*   Updated: 2024/10/09 09:35:02 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	char	*rtn;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	rtn = malloc(sizeof(char) * (end - start + 2));
	if (!rtn)
		return (NULL);
	ptr = rtn;
	while (start <= end)
		*ptr++ = s1[start++];
	*ptr = '\0';
	return (rtn);
}

/* #include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = ft_strtrim("hello world", " ");
	printf("%s\n", ptr);
	return (0);
} */
