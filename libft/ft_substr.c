/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:57:57 by emgret            #+#    #+#             */
/*   Updated: 2024/10/07 17:58:23 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate_empty_string(void)
{
	char	*rtn;

	rtn = malloc(sizeof(char));
	if (!rtn)
		return (NULL);
	rtn[0] = '\0';
	return (rtn);
}

char	*copy_substring(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*rtn;

	rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (allocate_empty_string());
	if (len > s_len - start)
		len = s_len - start;
	return (copy_substring(s, start, len));
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
