/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 08:09:21 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/23 15:18:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
            while(av[1][i])
            {
                if(av[1][i] == ' ' || av[1][i + 1] == '\t')
                {
                    if(av[1][i + 1] > 32 && av[1][i + 1] != '\0')
                    write(1,".",1);
                }
                else if(av[1][i] != ' ' || av[1][i] != '\t')
                    write(1, &av[1][i], 1);
                i++;
            }
    }
}