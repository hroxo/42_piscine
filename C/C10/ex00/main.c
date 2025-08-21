#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "util.h"

#define BUF_SIZE 1024

void	print_file(int fd)
{
	char	filechar;

	while(read(fd, &filechar, 1))
		write(1, &filechar, 1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, FEW_ARG, sizeof(FEW_ARG));
		else
			write(1, MANY_ARG, sizeof(MANY_ARG));
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	print_file(fd);
	close(fd);
	return (0);
}
