/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:32 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/21 12:01:04 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int max(int* tab, unsigned int len)
{
    int max = 0;
    unsigned int i = 0;
    
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
    int arr[7] = {29,6,8,32};
    printf("%d", max(arr, 4));
}