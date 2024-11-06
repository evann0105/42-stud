/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_rev_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:44:32 by emgret            #+#    #+#             */
/*   Updated: 2024/09/10 14:45:39 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void maff_rev_alpha(void)
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
}

int main(void)
{
	maff_rev_alpha();
	return (0);
}