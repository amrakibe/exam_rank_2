/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:01:54 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/07 17:14:43 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int count = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			count = av[1][i] - 96;
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			count = av[1][i] - 64;
			while(count)
			{
				write(1, &av[1][i], 1);
				count--;
				}
				i++;
			}
		}
	write(1, "\n", 1);
}