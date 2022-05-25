/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:49:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/24 10:44:47 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			*ft_rrange(int start, int end)
{
	int			*range;
	int			i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (end - start));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (end != start)
	{
		range[i++] = end;
		end += (end > start) ? -1 : 1;
	}
	range[i] = end;
	return (range);
}
int main()
{
    int *r = ft_rrange(-1,2);
    int i = 0;
    while(r[i])
    {
		printf("%d", r[i++]);
    }
}