#include "ft_list.h"
#include <stdlib.h>

void ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*temp;
	int	length;

	length = 0;
	while (current->next == NULL)
	{
		current = *begin_list;
		length++;
	}
	while ((length / 2) > 0)
	{
		temp = current;
		current = *begin_list;
		*begin_list = temp;
		length--;
	}
}
