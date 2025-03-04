/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:40:07 by emgret            #+#    #+#             */
/*   Updated: 2024/10/04 14:53:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	needle_len = ft_strlen((char *)needle);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (i + needle_len > len)
				break ;
			j = 0;
			while (j < needle_len && haystack[i + j] == needle[j])
				j++;
			if (j == needle_len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char s1[] = "hello world";
	const char find[] = "world";
	char	*ptr;

	const char s3[] = "hello world";
	const char find2[] = "world";
	char	*ptr2;
	
	ptr = strnstr(s1, find, 8);
	ptr2 = ft_strnstr(s3, find2, 8);
	printf("%s\n", ptr);
	printf("-------------------\n");
	printf("%s\n", ptr2);
} */
