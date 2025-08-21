#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

void print_file(int fd, char *file_name);
void	print_error(char *file);

int main(int argc, char **argv)
{
	int fd;
	int	i;

	if (argc == 1)
	{
		print_file(STDIN_FILENO, "stdin");
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_error(argv[i]);
		else
			print_file(fd, argv[i]);
		i++;
		close(fd);
	}
	return (0);
}
