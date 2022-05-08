/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:41:25 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/08 20:04:39 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(int ac, char **av)
{
    int a1;
    int a2;
    char op;
    int result = 0;
    if(ac == 4)
    {
        a1 = atoi(av[1]);
        a2 = atoi(av[3]);
        op = av[2][0];
        if(op == '+')
            result = a1 + a2;
        else if(op == '-')
            result = a1 - a2;
        else if(op == '*')
            result = a1 * a2;
        else if(op == '/')
            result = a1 / a2;
        else if(op == '%')
            result = a1 % a2;
        printf("%d", result);
    }
    printf("\n");
}