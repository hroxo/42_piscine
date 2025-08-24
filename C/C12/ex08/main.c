#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list);

t_list	*create_elem(void *data)
{
	t_list	*obj;
	obj = malloc(sizeof(t_list));
	if (!obj)
		return (NULL);
	obj->next = NULL;
	obj->data = data;
	return (obj);
}

void	print_t(t_list *obj)
{
	while (obj != NULL)
	{
		printf("%d ", (int)(long)obj->data);
		obj = obj->next;
	}
	printf("\n");
}

int main (int argc, char **argv)
{
	t_list	*new_node;
	t_list	*head;

	head = NULL;
	for (int i = 1; i < argc; i++) 
	{
		new_node = create_elem((void *)(long)atoi(argv[i]));
		new_node->next = head;
		head = new_node;
	}
	printf("Original list\n");
	print_t(head);
	ft_list_reverse(&head);
	printf("Updated list\n");
	print_t(head);
	free(head);
	return (0);
}
