/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:15:01 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/22 16:43:25 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int s_len(char *str)
{
    int i =0;
    int r = 0;
    while(str[i])
    { 
        //    printf("%c", str[i]);
        if(str[i] == 32 && (str[i+1] >= 'a' && str[i+1] <= 'z'))
            r++;
            i++;
        }
        return r;
    }
int main(int argc, char **argv)
{
    int len_str = s_len(argv[1])+ 1;
    char **str = malloc(len_str);
}