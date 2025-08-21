#include <stdlib.h>

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	char	*temp;

	i = 0;
	while (tab[i] != NULL)
	{
		j = i + 1;
		while (tab[j] != NULL)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
