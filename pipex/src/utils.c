/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:26:16 by emgret            #+#    #+#             */
/*   Updated: 2025/04/01 09:58:47 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

char	*find_cmd_path(char *cmd, char **envp)
{
	t_find	find;

	if (ft_strchr(cmd, '/'))
	{
		if (access(cmd, X_OK) == 0)
			return (ft_strdup(cmd));
		else
			return (NULL);
	}
	find.path_env = get_path_env(envp);
	if (!find.path_env)
		return (NULL);
	find.paths = ft_split(find.path_env, ':');
	if (!find.paths)
		return (NULL);
	find.i = 0;
	while (find.paths[find.i])
	{
		find.full_path = ft_strjoin(find.paths[find.i], "/");
		if (!find.full_path)
			return (free_tab(find.paths), NULL);
		find.temp = ft_strjoin(find.full_path, cmd);
		free(find.full_path);
		if (!find.temp)
			return (free_tab(find.paths), NULL);
		if (access(find.temp, X_OK) == 0)
			return (free_tab(find.paths), find.temp);
		free(find.temp);
		find.i++;
	}
	return (free_tab(find.paths), NULL);
}


char	*get_path_env(char **envp)
{
	int	i = 0;

	while (envp[i])
	{
		if (strncmp(envp[i], "PATH=", 5) == 0)
			return (envp[i] + 5);
		i++;
	}
	return (NULL);
}

void	free_tab(char **tab)
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
