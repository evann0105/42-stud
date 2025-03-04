/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_clean.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:43:12 by emgret            #+#    #+#             */
/*   Updated: 2025/03/02 11:57:00 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	init_files_and_pipe(t_stack *stack, char **av)
{
	stack->file1 = av[1];
	stack->cmd1 = av[2];
	stack->cmd2 = av[3];
	stack->file2 = av[4];
	stack->file1_fd = open(stack->file1, O_RDONLY);
	if (stack->file1_fd < 0)
	{
		perror("Erreur lors de l'ouverture du fichier d'entrée");
		exit(0);
	}
	stack->file2_fd = open(stack->file2, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (stack->file2_fd < 0)
	{
		perror("Erreur lors de l'ouverture du fichier de sortie");
		close(stack->file1_fd);
		exit(0);
	}
	if (pipe(stack->pipe_fd) == -1)
	{
		perror("Erreur lors de la création du pipe");
		close(stack->file1_fd);
		close(stack->file2_fd);
		exit(0);
	}
}

void	parent_cleanup(t_stack *stack)
{
	close(stack->file1_fd);
	close(stack->file2_fd);
	close(stack->pipe_fd[0]);
	close(stack->pipe_fd[1]);
	waitpid(stack->pid1, NULL, 0);
	waitpid(stack->pid2, NULL, 0);
}
