/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:23:13 by emgret            #+#    #+#             */
/*   Updated: 2024/10/10 09:55:06 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_maillon;

	new_maillon = (t_list *)malloc(sizeof(t_list));
	if (!new_maillon)
		return (NULL);
	new_maillon->content = content;
	new_maillon->next = NULL;
	return (new_maillon);
}
