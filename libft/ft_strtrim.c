/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:14:03 by emgret            #+#    #+#             */
/*   Updated: 2024/10/07 13:52:05 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_in_set(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		ptr_index;
	char	*ptr;

	i = 0;
	ptr_index = 0;
	ptr = malloc(sizeof(char) * (strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (!char_in_set(s1[i], set))
			ptr[ptr_index++] = s1[i];
		i++;
	}
	ptr[ptr_index] = '\0';
	return (ptr);
}

/* #include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = ft_strtrim("hello world", " ");
	printf("%s\n", ptr);
	return (0);
} */
