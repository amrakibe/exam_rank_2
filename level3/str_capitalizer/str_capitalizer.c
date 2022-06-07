/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:02:50 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/07 20:46:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 1;
	int j;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				j++;
			}
			i++;
		}
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (j == 0 && (av[i][j] < 'A' || av[i][j] > 'Z'))
					av[i][j] -= 32;
				if (av[i][j] == ' ' || av[i][j] == '\t')
					av[i][j + 1] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}