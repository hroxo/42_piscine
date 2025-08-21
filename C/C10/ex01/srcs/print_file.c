#include <unistd.h>

#define BUF_SIZE 1024

void	print_error(char *file);

void print_file(int fd, char *file_name)
{
	char	buf[BUF_SIZE];
	int		f_r;
	
	f_r = read(fd, buf, BUF_SIZE);
	while(f_r > 0)
	{
		write(1, buf, f_r);
		f_r = read(fd, buf, BUF_SIZE);
	}
	if (f_r == -1)
		print_error (file_name);
}
