/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:25:45 by emgret            #+#    #+#             */
/*   Updated: 2024/09/13 09:11:51 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    inter(char *str1, char *str2)
{
    int i;
    int tab[128];

    i = 0;
    while(i < 128)
    {
        tab[i] = 0;
        i++;
    }
    i = 0;
    while(str2[i])
    {
        tab[(int)str2[i]] = 1;
        i++;
    }
    i = 0;
    while(str1[i])
    {
        if(tab[(int)str1[i]] == 1)
        {
            write(1, &str1[i], 1);
            tab[(int)str1[i]] = 0;
        }
    i++;
    }
}


int main(int argc, char **argv)
{

}
