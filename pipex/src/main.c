/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:25:33 by emgret            #+#    #+#             */
/*   Updated: 2025/04/01 10:19:54 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

static void	exec_child_cmd1(t_stack *stack, char **envp)
{
	char	**args1;
	char	*path_cmd1;

	if (dup2(stack->file1_fd, STDIN_FILENO) < 0)
		exit_mess("dup2 file1_fd -> STDIN échoué");
	if (dup2(stack->pipe_fd[1], STDOUT_FILENO) < 0)
		exit_mess("dup2 pipe_fd[1] -> STDOUT échoué");
	close(stack->file1_fd);
	close(stack->file2_fd);
	close(stack->pipe_fd[0]);
	close(stack->pipe_fd[1]);
	args1 = smart_split(stack->cmd1);
	if (!args1)
		exit_mess("Erreur d'allocation args1");
	path_cmd1 = find_cmd_path(args1[0], envp);
	if (!path_cmd1)
		exit_mess("Commande cmd1 non trouvée");
	execve(path_cmd1, args1, envp);
	perror("Erreur lors de l'exécution de cmd1");
	exit(0);
}

static void	child_process_cmd1(t_stack *stack, char **envp)
{
	stack->pid1 = fork();
	if (stack->pid1 < 0)
	{
		perror("Erreur lors du fork pour cmd1");
		close(stack->file1_fd);
		close(stack->file2_fd);
		close(stack->pipe_fd[0]);
		close(stack->pipe_fd[1]);
		exit(0);
	}
	if (stack->pid1 == 0)
		exec_child_cmd1(stack, envp);
}

static void	exec_child_cmd2(t_stack *stack, char **envp)
{
	char	**args;
	char	*path_cmd2;

	if (dup2(stack->pipe_fd[0], STDIN_FILENO) < 0)
		exit_mess("dup2 pipe_fd[0] -> STDIN échoué");
	if (dup2(stack->file2_fd, STDOUT_FILENO) < 0)
		exit_mess("dup2 file2_fd -> STDOUT échoué");
	close(stack->file1_fd);
	close(stack->file2_fd);
	close(stack->pipe_fd[0]);
	close(stack->pipe_fd[1]);
	args = smart_split(stack->cmd2);
	if (!args)
	{
		perror("Erreur d'allocation args");
		exit(0);
	}
	path_cmd2 = find_cmd_path(args[0], envp);
	if (!path_cmd2)
		exit_mess("Commande cmd2 non trouvée");
	execve(path_cmd2, args, envp);
	perror("Erreur lors de l'exécution de cmd2");
	exit(0);
}

static void	child_process_cmd2(t_stack *stack, char **envp)
{
	stack->pid2 = fork();
	if (stack->pid2 < 0)
	{
		perror("Erreur lors du fork pour cmd2");
		close(stack->file1_fd);
		close(stack->file2_fd);
		close(stack->pipe_fd[0]);
		close(stack->pipe_fd[1]);
		exit(0);
	}
	if (stack->pid2 == 0)
		exec_child_cmd2(stack, envp);
}

int	main(int ac, char **av, char **envp)
{
	t_stack	stack;

	if (correct_arg(ac) != 1)
		return (0);
	init_files_and_pipe(&stack, av);
	child_process_cmd1(&stack, envp);
	child_process_cmd2(&stack, envp);
	parent_cleanup(&stack);
	return (0);
}
