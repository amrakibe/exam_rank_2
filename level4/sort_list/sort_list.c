#include "list.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>



void display_nodes(t_list *head)
{
	while(head)
	{
		printf("The data ->  %d\n", head->data);
		head = head->next;
	}
}

void push_back(t_list **head_ref, int data)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->data = data;
	node->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref= node;
		return ;
	}
	t_list *last = *head_ref;

	while(last->next)
		last = last->next;
	last->next =node;
}


t_list *sort_list(t_list *head, int (*cmp)(int, int))
{
	t_list *save = head;
	int swap;

	if (!head)
		return (hezzad);

	while (head->next != NULL)
	{
		if (cmp(head->data, head->next->data) == 0)
		{
			swap = head->data;
			head->data = head->next->data;
			head->next->data = swap;
			head = save;
		}
		else
			head = head->next;
	}

	return (save);
}

int asc(int a, int b)
{
	return a <= b;
}

int main()
{
	srand(time(NULL));
	t_list *head = NULL;

	for(int i = 10; i >= 0; i--)
		push_back(&head, i);
	printf("Before sorting !\n");
	display_nodes(head);
	sort_list(head, &asc);
	printf("After sorting !\n");
	display_nodes(head);
	return 0;
}