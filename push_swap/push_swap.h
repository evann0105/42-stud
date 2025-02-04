/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:24:30 by emgret            #+#    #+#             */
/*   Updated: 2025/02/04 17:08:31 by emgret           ###   ########.fr       */
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
int		check_multiple_spaces(const char *str);
void	exit_mess(void);
void	free_split(char **split);

void	swap(int *a, int *b);

char	**initialize_all_args(int argc, int *test);
int		proc_argument(char *arg, char **all_args, int *test, int *total_args);
int		is_valid_argument(char *arg, int *test);
int		is_valid_argument(char *arg, int *test);
int		add_argument(char *arg, char **all_args, int *test, int *total_args);
void	free_all(char **all_args, int total_args);

void	sa(int *stack, int size);
void	sb(int *stack, int size);
void	ss(int *stack_a, int size_a, int *stack_b, int size_b);
void	rotate(int *stack, int size);
void	reverse_rotate(int *stack, int size);
void	sort_three(int *stack, int size);
void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	to_sort(int total_args, int *test, char	**all_args, int argc);

void	ra(int *stack_a, int size_a);
void	rb(int *stack_b, int size_b);
void	rr(int *stack_a, int size_a, int *stack_b, int size_b);
void	rra(int *stack_a, int size_a);
void	rrb(int *stack_b, int size_b);
void	rrr(int *stack_a, int size_a, int *stack_b, int size_b);
void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b);

#endif