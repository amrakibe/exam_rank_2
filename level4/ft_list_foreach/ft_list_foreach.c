/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:18:50 by amrakibe          #+#    #+#             */
/*   Updated: 2022/06/04 17:19:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void f(void *a)
{
    *(int *)a *= 10;
    return ;
}
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list;

    list = begin_list;
    while(list)
    {
        (*f)(list->data);
        list = list->next;
    }
}
int main()
{
    int a1=1;
    int a2=2;
    int a3=3;
    t_list *l1 = malloc(sizeof(t_list));
	t_list *l2= malloc(sizeof(t_list));
	t_list *l3= malloc(sizeof(t_list));
	l1->data = &a1;
	l1->next = l2;
	l2->data = &a2;
	l2->next = l3;
	l3->data = &a3;
	l3->next = NULL;
    ft_list_foreach(l1, f);
	printf("%i", *(int *)l1->data);
	return 0;
}
