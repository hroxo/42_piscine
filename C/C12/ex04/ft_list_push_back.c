#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*out;

	out = malloc(sizeof(t_list));
	out->data = data;
	out->next = NULL;
	return (out);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	if (current)
	{
		while (current->next != NULL)
			current = current->next;
		current = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
