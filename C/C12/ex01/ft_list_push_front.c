#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*out;

	out = malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	out->data = data;
	out->next = NULL;
	return (out);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	if (*begin_list)
	{
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
	else
		*begin_list = ft_create_elem(data);
}
