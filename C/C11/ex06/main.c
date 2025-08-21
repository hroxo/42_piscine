#include <stdio.h>
#include <stdlib.h>

void ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	printf("before ord:\n");
	for (int i = 1; i < argc; i++)
		printf("pos %i: %s\n", i, argv[i]);
	//argv[argc] = NULL;
	ft_sort_string_tab(&argv[1]);
	printf("after ord:\n");
	for (int i = 1; i < argc; i++)
		printf("pos %i: %s\n", i, argv[i]);
	return (0);
}
