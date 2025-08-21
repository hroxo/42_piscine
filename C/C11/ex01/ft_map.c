#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*out;
	int	i;

	i = 0;
	out = malloc(sizeof(int) * length);
	if (!out)
		return (NULL);
	while (i < length)
	{
		out[i] = (*f) (tab[i]);
		i++;
	}
	return (out);
}
