/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:43:29 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/09 22:30:37 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    int  i = 0;
    int len = ft_strlen(str);

    while(i < len)
    {
        len--;
        char tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
    }
    return(str);
}
int main() 
{ 
    char *str = "amine";
    printf("%s\n", ft_strrev(str));
}
