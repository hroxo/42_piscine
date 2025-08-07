#include <unistd.h>

void inter(char *str, char *base)
{
	int i;
	int	j;
	int n;
	int	flag;
	int	isbase;

	i = 0;
	while (str[i])
	{
		flag = 1;
		isbase = 0;
		n = 0;
		while (n < i)
		{
			if (str[n] == str[i])
				flag = 0;
			n++;
		}
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				isbase = 1;
			j++;
		}
		if (isbase == 1 && flag == 1)
			write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	inter(argv[1], argv[2]);
	return (0);
}
