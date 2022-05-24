/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:31:08 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/24 09:53:25 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        res *= str_base;
        if(str[i] >= '0' && str[i] <= '9')
            res += str[i] - 48;
        if(str[i] >= 'a' && str[i] <= 'z')
            res += str[i] - 87;
        if(str[i] >= 'A' && str[i] <= 'Z')
            res += str[i] - 55;
        i++;
    }
    return(res * sign);
}
int main()
{
    printf("%d\n",ft_atoi_base("-a", 16));
}