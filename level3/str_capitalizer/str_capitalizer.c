/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:02:50 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/08 18:27:14 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int status;
	int j = 1;
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		while (j < ac)
		{
			char *s = av[j];
			i = 0;
			status = 1;
			while (s[i])
			{
				char c = s[i];
				if (status == 1 && (c >= 'a' && c <= 'z'))
				{
					c -= 32;
					status = 0;
				}
				else if (status == 0 && (c >= 'A' && c <= 'Z'))
				{
					c += 32;
				}
				else if (status == 0 && (c == ' ' || c == '\t'))
					status = 1;
				else if (status == 1 && (c >= 'A' && c <= 'Z'))
				{
					status = 0;
				}
				write(1, &c, 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}