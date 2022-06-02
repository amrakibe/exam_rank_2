/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:49:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/01 11:47:12 by amrakibe         ###   ########.fr       */
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

int			*ft_rrange(int start, int end)
{
	int i = 0;
	int *arr;

	arr = (int*)malloc(sizeof(int) * ft_abs(end - start) + 1);
	while(end > start)
	{
		arr[i] = end;
		end--;
		i++;
	}
	arr[i] = end;
	while(end < start)
	{
		arr[i] = end;
		end++;
		i++;
	}
	arr[i] = end;
	return(arr);
}
int main()
{
	int i= 0;
	int s = 0;
	int e = -3;
	int *arr = ft_rrange(s, e);
	while(i < 4)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
