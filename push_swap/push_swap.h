/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:24:30 by emgret            #+#    #+#             */
/*   Updated: 2025/01/27 20:18:53 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int		check_double(char *argv, int *test);
int		is_digit(char *tab);
void	remove_plus(char *str);
int		check_min_max(char *argv);
void	exit_mess(void);
void	free_split(char **split);

void	swap(int *a, int *b);

char	**initialize_all_args(int argc, int *test);
int		proc_argument(char *arg, char **all_args, int *test, int *total_args);
int		is_valid_argument(char *arg, int *test);
int		is_valid_argument(char *arg, int *test);
int		add_argument(char *arg, char **all_args, int *test, int *total_args);
void	free_all(char **all_args, int total_args);

void	sa_swap(int *stack, int size);
void	push(int *src, int *src_size, int *dest, int *dest_size);
void	rotate(int *stack, int size);
void	reverse_rotate(int *stack, int size);
void	double_operation(void (*op)(int *, int), int *stack_a, int size_a,
			int *stack_b, int size_b);

void	sa_swap(int *stack, int size);
void	push(int *src, int *src_size, int *dest, int *dest_size);
void	rotate(int *stack, int size);
void	reverse_rotate(int *stack, int size);
void	double_operation(void (*op)(int *, int), int *stack_a, int size_a,
						int *stack_b, int size_b);
void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	sort_three(int *stack, int size);

#endif