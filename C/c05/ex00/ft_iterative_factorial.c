int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	if (nb < 0)
		return (0);
	nbr = 1;
	i = 1;
	while(i < nb + 1)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("output: %i", ft_iterative_factorial(atoi(argv[1])));
}
