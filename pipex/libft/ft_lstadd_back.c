/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:06:35 by emgret            #+#    #+#             */
/*   Updated: 2024/10/10 13:14:20 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_maillon)
{
	t_list	*current;

	if (!*lst)
		*lst = new_maillon;
	else
	{
		current = *lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_maillon;
	}
}
