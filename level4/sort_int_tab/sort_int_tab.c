
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:28:03 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/20 19:02:10 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned	int	i;
	int				tmp;
	
	i = 0;
	while(i < size)
	{
		if(tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
            printf("new_index_is:%d\n", i);
			i = -1;
		}
		i++;
	}
}
int main(void)
{
    int tab[10];
    int i = 0;

    tab[0] = 5;
    tab[1] = 2;
    tab[2] = 4;
    tab[3] = 9;
    tab[4] = 8;
    tab[5] = 0;
    tab[6] = 1;
    tab[7] = 7;
    tab[8] = 5;
    tab[9] = 6;
    sort_int_tab(tab, 9);
    while (i <= 9)
        printf("%d\n", tab[i++]);
    return (0);
}
