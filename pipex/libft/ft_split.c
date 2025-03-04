/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:54:19 by emgret            #+#    #+#             */
/*   Updated: 2025/01/28 18:34:09 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

static void	free_ret(char **ret, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

static int	add_word(char **ret, const char **s, size_t *i, char c)
{
	size_t	len;

	len = 0;
	while (**s && **s != c && ++len)
		++(*s);
	ret[*i] = ft_substr(*s - len, 0, len);
	if (!ret[*i])
		return (0);
	(*i)++;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!add_word(ret, &s, &i, c))
			{
				free_ret(ret, i);
				return (NULL);
			}
		}
		else
			++s;
	}
	ret[i] = NULL;
	return (ret);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "hello, world, how, are, you";

	ft_split(str, ',');
	return (0);
} */
