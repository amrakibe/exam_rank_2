/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:39:57 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/12 19:46:10 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int chek_exist(char c, char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 3)
    {
        while(av[1][i])
        {
            if(chek_exist(av[1], av[2][i]))
            i++;
            write(1,&av[1][i],1); 
        }
    }
}