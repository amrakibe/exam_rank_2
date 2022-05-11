/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:36:48 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/11 15:37:53 by amrakibe         ###   ########.fr       */
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

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!chek_double(argv[1], i))
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        i = 0;
        while(argv[2][i])
        {
            if(!chek_double(argv[2], i) && !chek_exist(argv[2][i], argv[1]))
            {
                write(1, &argv[2][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}