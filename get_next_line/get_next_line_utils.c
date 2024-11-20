/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:01:18 by emgret            #+#    #+#             */
/*   Updated: 2024/11/20 13:33:31 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	s1_len = s1 ? ft_strlen(s1) : 0;
	s2_len = s2 ? ft_strlen(s2) : 0;
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (free(s1), NULL);
	i = 0;
	while (s1 && i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && i - s1_len < s2_len)
	{
		str[i] = s2[i - s1_len];
		i++;
	}
	str[i] = '\0';
	return (free(s1), str);
}

int	ft_strlen(char	*str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
