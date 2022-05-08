/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:12:44 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/08 16:32:36 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char *buf = &av[1][i];
    if(ac == 2)
    {
        while(buf[i])
        {
            if(buf[i] >= 'a' && buf[i] <= 'z')
            buf[i] = 'm' - (buf[i] - 'n');
            else if(buf[i] >= 'A' && buf[i] <= 'Z')
            buf[i] = 'M' - (buf[i] - 'N');
            write(1, &buf[i++], 1);
        }
    }
    write(1, "\n", 1);
}