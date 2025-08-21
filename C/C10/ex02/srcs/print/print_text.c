#include <unistd.h>
#include "header.h"

void	print_head(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==");
	write(1, "\n", 1);
}

void	print_text(char *file_content, char *file_name, int flag)
{
	if (flag == 1)
		print_head(file_name);
	ft_putstr(file_content);
}
