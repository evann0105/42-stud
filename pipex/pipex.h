/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:54:45 by emgret            #+#    #+#             */
/*   Updated: 2025/04/01 10:29:10 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "./libft/libft.h"
# include <sys/wait.h>

typedef struct s_stack
{
	char	*file1;
	char	*file2;
	int		file1_fd;
	int		file2_fd;
	char	*cmd1;
	char	*cmd2;
	int		pipe_fd[2];
	pid_t	pid1;
	pid_t	pid2;
}	t_stack;

typedef struct s_find
{
	char	*path_env;
	char	**paths;
	char	*full_path;
	char	*temp;
	int		i;
}	t_find;

typedef struct s_pars
{
	int		i;
	int		j;
	int		start;
	int		words;
	int		in_quote;
	char	quote_type;
}	t_pars;


void	exit_mess(char *str);
void	parent_cleanup(t_stack *stack);
void	init_files_and_pipe(t_stack *stack, char **av);
int		correct_arg(int argc);
char	*find_cmd_path(char *cmd, char **envp);
char	*get_path_env(char **envp);
void	free_tab(char **tab);
char	**smart_split(const char *s);

#endif