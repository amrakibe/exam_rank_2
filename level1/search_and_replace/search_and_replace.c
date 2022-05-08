/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:10:45 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/08 15:24:59 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac,char **av)
{
    char first;
    char last;
    int i = 0;
    first = av[2][i];
    last = av[3][i];
    if(ac == 4)
    {
        while(av[1][i])
        {
            if(av[1][i] == first)
            av[1][i] = last;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}