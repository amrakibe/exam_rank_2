/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:34:08 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/10 18:04:40 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int chek_double(char *str, int size)
{
    int i = 0;
    while(i < size)
    {
        if(str[i] == str[size])
            return 1;
        i++;
    }
    return(0);
}

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
    char *str1 = av[1];
    char *str2 = av[2];
    char *str3;
    int i;

    i = 0;
    while(str1[i])
    {
        if(chek_exist(str1[i], str2) && !chek_double(str1, i))
        {
            write(1 ,&str1[i], 1);
        }
        i++;
    }
}