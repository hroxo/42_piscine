#include <errno.h>
#include <unistd.h>
#include <string.h>
#include "header.h"

void	print_error(char *file)
{
	write(2, "ft_tail: ", 8);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}
