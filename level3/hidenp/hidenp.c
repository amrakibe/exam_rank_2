/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:54:37 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/04 16:17:25 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	int i = 0;
	int res = 0;
	int j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					res++;
					i++;
				}
				j++;
			}
			i++;
		}
		if (ft_strlen(av[1]) == res)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}