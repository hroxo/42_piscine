#include <unistd.h>
int	main(void)
{
	int	i;
	char z;

	i = 0;
	while(i < 26)
	{
		if (i % 2 == 0)
			z = 'z' - i;
		else
			z = 'Z' - i;
		write(1, &z, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
