/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:21:37 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/25 14:12:54 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *ft_strdup(char *src)
{
    int i , j;
    char *buf;
    
    i = 0;
    j = 0;
    buf = malloc(sizeof(char) * ft_strlen(src));
    if(!buf)
        return(NULL); 
    while(src[i] != '\0')
        buf[j++] = src[i++];
    buf[j] = '\0';
    return(buf);
}
int main()
{
    printf("%s\n", ft_strdup("amrakibe"));
    printf("%s\n", strdup("amrakibe"));
}