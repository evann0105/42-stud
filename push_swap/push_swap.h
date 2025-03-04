/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:24:30 by emgret            #+#    #+#             */
/*   Updated: 2025/02/19 13:23:38 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int	*stack;
	int	*size;
	int	moves;
}	t_stack;

void	process_arguments(int argc, char **argv, int **test, int *total_args);
void	fill_test_array(int argc, char **argv, int *test);
int		count_numbers(char *str);
int		count_total_numbers(int argc, char **argv);
int		check_double(char *argv, int *test, int size);
int		is_digit(char *tab);
void	remove_plus(char *str);
int		check_min_max(char *argv);
int		is_sorted(int *stack, int size);

char	**initialize_all_args(int argc);
int		proc_argument(char *arg, char **all_args, int *test, int *total_args);
int		process_single_arg(char *arg, char **all_args, int *test, int *t_args);
int		is_valid_argument(char *arg, int *test, int *total_args);
int		add_argument(char *arg, char **all_args, int *test, int *total_args);

void	exit_mess(void);
void	free_split(char **split);
void	free_all(char **all_args, int total_args);

void	perform_sorting(int total_args, int *stack_a, int *stack_b);
void	to_sort(int total_args, int *stack_a, int *stack_b);
void	sort_three(int *stack, int size);
void	sort_five(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	radix_sort(int *stack_a, int *size_a, int *stack_b, int *size_b);

void	swap(int *a, int *b);
void	rotate(int *stack, int size);
void	reverse_rotate(int *stack, int size);
void	sa(int *stack, int size);
void	sb(int *stack, int size);
void	ss(int *stack_a, int size_a, int *stack_b, int size_b);
void	ra(int *stack_a, int size_a);
void	rb(int *stack_b, int size_b);
void	rr(int *stack_a, int size_a, int *stack_b, int size_b);
void	rra(int *stack_a, int size_a);
void	rrb(int *stack_b, int size_b);
void	rrr(int *stack_a, int size_a, int *stack_b, int size_b);
void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b);

int		cmp(const void *a, const void *b);
int		partition(int arr[], int low, int high);
void	quick_sort(int arr[], int low, int high);
void	my_qsort(int arr[], int size);
void	copy_stack(int *dest, int *src, int size);
void	replace_with_indices(int *stack, int *sorted, int size);
void	handle_stack_a(int *stack_a, int *size_a, int bit, int *moves_a);
void	handle_stack_b(t_stack *a, t_stack *b, int *moves);
void	undo_moves(int *stack, int si, int mo, void (*reverse_op)(int *, int));
void	process_bit_pass(t_stack *sta_a, t_stack *stack_b, int bit);

#endif