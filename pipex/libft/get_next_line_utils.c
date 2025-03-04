/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:01:18 by emgret            #+#    #+#             */
/*   Updated: 2024/11/25 19:00:28 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s2)
		return (s1);
	s1_len = ft_strlen_gnl(s1);
	s2_len = ft_strlen_gnl(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (free(s1), NULL);
	i = -1;
	if (s1)
	{
		while (++i < s1_len)
			str[i] = s1[i];
	}
	i = -1;
	while (++i < s2_len)
		str[s1_len + i] = s2[i];
	str[s1_len + s2_len] = '\0';
	free(s1);
	return (str);
}

int	ft_strlen_gnl(char	*str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
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
