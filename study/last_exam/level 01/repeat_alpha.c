#include <unistd.h>

void repeat_alpha(char c, int n)
{
	while (n)
	{
		write (1, &c, 1);
		n--;
	}
}

int main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (argc != 2)
	{
		write (1, "\n",  1);
		return (1);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			n = argv[1][i] - 'a' + 1;
			repeat_alpha (argv[1][i], n);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			n = argv[1][i] - 'A' + 1;
			repeat_alpha (argv[1][i], n);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
