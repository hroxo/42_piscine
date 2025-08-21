#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{	
		write(1, &str[n], 1);
		n++;
	}
}
