#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "header.h"

int main(int argc, char **argv)
{
	(void) argc;
	int j = 0;
	int fd = open(argv[1], O_RDONLY);
	int i = 0;
	t_map *out = file_to_string(fd, &i);
	while (j < i)
	{
		if (j % 16 == 0 && j)
			write(1, "\n", 1);
		ft_putstr(out[j].hex_value); //TODO putstr
		write(1, " ", 1);
		j++;
	}
	free(out);
	return (0);
}
