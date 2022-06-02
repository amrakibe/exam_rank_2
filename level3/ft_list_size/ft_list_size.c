/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:59:04 by amrakibe          #+#    #+#             */
/*   Updated: 2022/05/25 18:01:18 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "t_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *list;
	list = begin_list;
	while(list)
	{
		list = list->next;
		i++;
	}
	return(i);
}
int main()
{
	t_list *l1 = malloc(sizeof(t_list));
	t_list *l2= malloc(sizeof(t_list));
	t_list *l3= malloc(sizeof(t_list));
	t_list *l4= malloc(sizeof(t_list));
	l1->data = "something";
	l1->next = l2;
	l2->data = "writings";
	l2->next = l3;
	l3->data = "yeah";
	l3->next = l4;
	l4->data = "whaiting";
	l4->next = NULL;
	printf("%i", ft_list_size(l1));
	return 0;
}