#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s2[i] - s1[i]);
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	main(int argc, char **argv)
{
	printf("before ord:\n");
	for (int i = 1; i < argc; i++)
		printf("pos %i: %s\n", i, argv[i]);
	//argv[argc] = NULL;
	ft_advanced_sort_string_tab(&argv[1], &ft_strcmp);
	printf("after ord:\n");
	for (int i = 1; i < argc; i++)
		printf("pos %i: %s\n", i, argv[i]);
	return (0);
}
