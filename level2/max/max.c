/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:32 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/12 18:05:50 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
    int arr[4] = {12,6,8,32,5};
    printf("%d", max(arr, 4));
}