#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;

	while (begin_list != NULL)
	{
		current = begin_list->next;
		(*free_fct)(begin_list->data);
		free (begin_list);
		begin_list = current;
	}
}
