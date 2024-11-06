/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:58:16 by emgret            #+#    #+#             */
/*   Updated: 2024/09/12 09:07:35 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
int	main(void)
{
	char	s2[] = "hello world !";
	char	s1[] = "";

	printf("s1 avant cpy : %s\n", s1);	
	printf("s1 apres cpy : %s", ft_strcpy(s1, s2));
	return (0);
}