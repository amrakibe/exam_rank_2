/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:29:42 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/10 14:42:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		is_power_of_2(unsigned int n)
{
	unsigned long i;

	i = 1;
	while (i <= 0xffffffff)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
int main()
{
    printf("%d", is_power_of_2(8));
}