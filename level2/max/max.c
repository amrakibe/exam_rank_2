/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:32 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/12 18:04:58 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

// int		max(int* tab, unsigned int len)
// {
//     int i = -1;
//     int tmp;

//     while(i < tmp - 1)
//     {
//         if(tab[i] < tab[i + 1])
//         tmp = tab[i];
//         tab[i] = tab[i + 1];
//         tab[i + 1] = tmp;
//         i = -1;
//     }
//     i++;
//     return tab[0];
// }

int max(int *tab, unsigned int len)
{
    int max = 0;
    int i = 0;
    max = tab[0];
    while (i < len)
    {
        if (max <= tab[i])
            max = tab[i];
        i++;
    }
    return max;
}

int main()
{
    int arr[4] = {12};
    printf("%d", max(arr, 4));
}