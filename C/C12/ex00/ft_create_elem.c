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
