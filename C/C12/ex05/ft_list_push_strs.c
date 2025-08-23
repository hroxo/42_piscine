#include "ft_list.h"
#include <_stdlib.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*out;

	out = malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	out->next = NULL;
	out->data = data;
	return (out);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;

	if (size <= 0)
		return (0);
	node = ft_create_elem(strs[size - 1]);
	node->next = ft_list_push_strs(size - 1, strs);
	return (node);
}
