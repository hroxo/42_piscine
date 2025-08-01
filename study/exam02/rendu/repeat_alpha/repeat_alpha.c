#include <unistd.h>

void loop_letter(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int	n;
	int	i;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			i = str[n] - 'A' + 1;
		else if (str[n] >= 'a' && str[n] <= 'z')
			i = str[n] - 'a' + 1;
		else
			i = 1;
		loop_letter(str[n], i);
		n++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	repeat_alpha(argv[1]);
	write (1, "\n", 1);
	return (0);
}
