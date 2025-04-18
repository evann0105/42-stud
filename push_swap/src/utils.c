/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:16:56 by emgret            #+#    #+#             */
/*   Updated: 2025/02/18 23:25:17 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_digit(char *tab)
{
	int		i;
	char	read;
	int		response;

	i = 0;
	response = 1;
	while (tab[i])
	{
		read = tab[i];
		if (read == '-' || read == '+')
		{
			if (tab[i + 1] == '-' || tab[i + 1] == '+')
				return (0);
			if (tab[i + 1] != '\0')
				response = is_digit(&tab[i + 1]);
			if (response == 0)
				return (0);
		}
		else if (read < '0' || read > '9')
			return (0);
		i++;
	}
	return (1);
}

void	char_to_remove(char *str, char remove)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] != remove)
			str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
}

void	remove_plus(char *str)
{
	int	i;

	if (str == NULL || str[0] == '\0')
		return ;
	if (str[0] == '+' && str[1] == '\0')
		exit_mess();
	if (str[0] == '+')
	{
		i = 0;
		while (str[i] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	if (str[0] == '0')
		char_to_remove(str, '0');
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	process_single_arg(char *arg, char **all_args, int *test, int *t_args)
{
	if (!is_valid_argument(arg, test, t_args))
	{
		exit_mess();
		return (0);
	}
	if (add_argument(arg, all_args, test, t_args) == 0)
	{
		exit_mess();
		return (0);
	}
	return (1);
}
