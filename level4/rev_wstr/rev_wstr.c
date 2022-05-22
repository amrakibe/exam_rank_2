/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:15:01 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/22 19:34:35 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str) 
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
void print_unitl_space(char *str)
{
    int i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        write(1, str + i, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char	*str;
        int		len;

        str = av[1];
        len = ft_strlen(str) -1;
        while(len >= 0)
        {
            if (str[len] == ' ' || str[len] == '\t' || len == 0)
            {
                print_unitl_space(str + len + (len ? 1 : 0));
                if (len)
                    write(1, " ", 1);
            }
            len--;
        }
    }
    write(1, "\n", 1);
}