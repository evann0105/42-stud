/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:24:30 by emgret            #+#    #+#             */
/*   Updated: 2025/01/18 17:29:50 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

void	fonction_test(char **tab, int taille);
int		check_double(char *argv, int *test);
int		is_digit(char *tab);
void	remove_plus(char *str);
int		check_min_max(char *argv);
void	exit_mess(void);
void	free_split(char **split);

#endif