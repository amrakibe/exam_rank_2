/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:41:25 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/08 19:26:43 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        printf("\n");
    }
    else if(ac == 4)
    {
        int b = atoi(av[3]);
        int a = atoi(av[1]);
        int res = 0;
        
        char op = av[2][0];
        
            if(op == '+')
                res = a + b;
            else if(op == '*')
                res = a * b;
            else if(op == '-')
                res = a - b;
            else if(op == '%')
                res = a % b;
            else if(op == '/')
                res = a / b;
                else
            printf("%d\n",res);
        }
        else
            write(1, "\n", 1);
        return(0);
    }
