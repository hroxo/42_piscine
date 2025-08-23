#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	counter;

	counter = 0;
	while (begin_list && counter < nbr)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (begin_list);
}
