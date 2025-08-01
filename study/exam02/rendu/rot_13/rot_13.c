#include <unistd.h>

void	rot_13(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if ((str[n] <= 'z' && str[n] > 'm') || (str[n] <= 'Z' && str[n] > 'M'))
			str[n] -= 13;
		else if ((str[n] <= 'M' && str[n] >= 'A') || (str[n] <= 'm' && str[n] >= 'a'))
			str[n] += 13;
		write (1, &str[n], 1);
		n++;
	}
	write (1, "\n", 1);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	rot_13(argv[1]);
	return (0);
}
