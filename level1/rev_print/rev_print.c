/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:16:35 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/07 17:23:05 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int len = ft_strlen;
    char tmp[256];
    if(ac == 2)
    {
        while(i < len)
        {
            
        }
    }
}