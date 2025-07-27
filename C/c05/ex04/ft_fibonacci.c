int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
       	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
	(void) argc;
	printf("%i", ft_fibonacci(atoi(argv[1])));
}
