/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:39:57 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/13 20:30:12 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int s = 0;
    if(ac == 3)
    {
        while(av[1][i])
        {
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    s++;
                    i++;
                }
                j++;
            }
            i++;
        }
        if(ft_strlen(av[1]) == s)
            ft_putstr(av[1]);
        
    }
    write(1,"\n",1);
}