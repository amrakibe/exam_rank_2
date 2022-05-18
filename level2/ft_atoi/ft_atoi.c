/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:06:13 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:38 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	
	while(str[i] <= 32)
	i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
	i++;
	while(str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}
int main()
{
	printf("%d\n", ft_atoi("-199"));
	printf("%d\n", atoi("-199"));
}