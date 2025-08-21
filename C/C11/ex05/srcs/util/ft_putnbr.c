#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbr;
	char	c;
	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
