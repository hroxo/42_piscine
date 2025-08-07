#include <unistd.h>

void	ft_putnbr(int nb)
{
	long nbr;
	char c;

	nbr = nb;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}

void fizzbuzz(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0)
			write(1, "fizz", 4);
		if (nbr % 5 == 0)
			write(1, "buzz", 4);
		if (nbr % 3 != 0 && nbr % 5 != 0)
			ft_putnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
}

int main (void)
{
	fizzbuzz();
}
