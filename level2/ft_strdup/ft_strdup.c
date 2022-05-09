/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:21:37 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/09 17:36:44 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char *ft_strdup(char *src)
{
    int i , j;
    char *buf;
    
    i = 0;
    j = 0;
    buf = malloc(sizeof(char *));
    if(!buf)
        return(NULL); 
    while(src[i] != '\0')
    {
        buf[j++] = src[i++];
    }
    buf[j] = '\0';
    return(buf);
}
int main()
{
    printf("%s\n", ft_strdup("amrakibe"));
    printf("%s\n", strdup("amrakibe"));
}