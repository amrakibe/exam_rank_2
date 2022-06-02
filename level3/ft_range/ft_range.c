/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:31:07 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/01 11:03:55 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_abs(int x)
{
	if(x < 0)
		return(-x);
	return(x);
}

int			*ft_range(int start, int end)
{
	int i = 0;
	int *arr;

	arr = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while(start < end)
	{
		arr[i] = start;
		start++;
		i++;
	}
	arr[i] = start;
	while(start > end)
	{
		arr[i] = start;
		start--;
		i++;
	}
	arr[i] = start;
	return(arr);
}
int main()
{
	int i = 0;
	int s = 1;
	int e = 7;
	int *arr = ft_range(s, e);
	while( i < 7)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
