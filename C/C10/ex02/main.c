#include <stdint.h>
#include <stdlib.h>
#include "header.h"
#include <fcntl.h>
#include <unistd.h>

void	puttext(char *file, int c, int flag)
{
	int		fd;
	char	*text;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		print_error(file);
		return ;
	}
	text = tail_text(fd, c);
	print_text(text, file, flag);
	free(text);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*text;

	i = 3;
	if (argc < 3 || check_flag(argv[1], argv[2]))
	{
		ft_putstr("ft_tail: illegal option -- c\nusage: ft_tail [-c #] [file ...]\n");
		return (1);
	}
	if (argc == 3)
	{
		text = tail_text(STDIN_FILENO, ft_atoi(argv[2]));
		print_text(text, argv[1], 0);
	}
	else if (argc > 3)
	{
		if (argc == 4)
			puttext(argv[i], ft_atoi(argv[2]), 0);
		else
		{
			while (i < argc)
			{	
				puttext(argv[i], ft_atoi(argv[2]), 1);
				ft_putstr("\n");
				i++;
			}
		}
	}
	return (0);
}
