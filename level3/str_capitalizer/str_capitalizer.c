/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:02:50 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/07 09:09:29 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char **av)
{
	int i = 0;
	int status = 1;
	int j = 1;
	if (ac == 1)
		write(1, "\n", 1);
	while(j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			char c = av[j][i];
			if(av[j][i + 1] == ' ' || av[j][i + 1] == '\0' || av[j][i + 1] == '\t')
			{
           		if(c >= 'a' && c <= 'z')
				   c -= 32;
			}
			else
			{
				if(c >= 'A' && c <= 'Z')
					c += 32;
			}
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
