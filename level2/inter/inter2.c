/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:19:12 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/15 09:59:43 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int chek_double(char *str, int size)
{
	int i = 0;
	while(i < size)
	{
		if(str[i] == str[size])
			return(1);
		i++;
	}
	return(0);
}

int chek_exist(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 3)
	{
		while(av[1][i])
		{
			if(chek_exist(av[1][i], av[2]) && !chek_double(av[1], i))
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
