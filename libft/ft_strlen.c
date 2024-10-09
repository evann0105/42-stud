/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:02:56 by emgret            #+#    #+#             */
/*   Updated: 2024/10/07 14:33:27 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "hello world !";
	char s2[] = "hello world !";

	int result1 = strlen(s1);
	int result2 = ft_strlen(s2);
	printf("%d\n", result1);
	printf("---------------\n");
	printf("%d\n", result2);
	
	return (0);
} */