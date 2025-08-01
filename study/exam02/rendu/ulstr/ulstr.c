#include <unistd.h>
void	trade_caps(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] <= 'Z' && str[n] >= 'A')
		{
			str[n] += 32;
			write (1, &str[n], 1);
		}
		else if (str[n] <= 'z' && str[n] >= 'a')
		{
			str[n] -= 32;
			write (1, &str[n], 1);
		}
		else
			write (1, &str[n], 1);
		n++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	trade_caps(argv[1]);
	write (1, "\n", 1);
	return (0);
}
