/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:32 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/03 15:26:53 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int max(int* tab, unsigned int len)
{
    int max = 0;
    unsigned int i = 0;
    
    if(!len)
        return(0);
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
    int arr[7] = {99,7,5,3};
    printf("%d", max(arr, 2));
}