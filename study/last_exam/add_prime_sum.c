/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:46:41 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/07 10:34:04 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_prime(int nb)
{
	int	temp;

	temp = 2;
	while (temp < nb)
	{
		if (nb % temp == 0)
			return (1);
		temp++;
	}
	return (0);
}

int	add_prime_sum(int nb)
{
	int	result;

	result = 0;
	if (nb < 2)
		return (0);
	if (!is_prime(nb))
		return(nb + add_prime_sum(nb - 1));
	return (add_prime_sum(nb - 1));
}

void	ft_putnbr(int nb)
{
	long	nbr;
	char	c;

	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		write (1, "-", 1);
	}
	if (nbr / 10 > 0)
		ft_putnbr (nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	sig;
	int	result;
	int	i;

	i = 0;
	sig = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sig);
}

int main(int argc, char **argv)
{
	int	nb;
	int	output;

	if (argc != 2)
	{
		write (1, "0\n", 2);
		return (1);
	}
	nb = ft_atoi(argv[1]);
	if (nb < 2)
	{
		write (1, "0\n", 2);
		return (2);
	}
	output = add_prime_sum(nb);
	ft_putnbr(output);
	write(1, "\n", 1);
	return (0);
}
