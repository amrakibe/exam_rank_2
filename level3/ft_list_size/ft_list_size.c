/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:59:04 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/24 13:48:56 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	list = begin_list;
	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	t_list *l1 = malloc(sizeof(t_list));
	t_list *l2= malloc(sizeof(t_list));
	t_list *l3= malloc(sizeof(t_list));
	l1->data = "something";
	l1->next = l2;
	l2->data = "writings";
	l2->next = l3;
	l3->data = "yeah";
	l3->next = NULL;
	printf("%i", ft_list_size(l1));
	return 0;
}