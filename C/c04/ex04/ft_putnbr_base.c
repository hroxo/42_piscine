/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 08:29:43 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/24 09:51:17 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	n;

	n = 0;
	while (base[n])
		n++;
	return (n);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 33 || base[i] == 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;

	len = ft_strlen(base);
	nb = nbr;
	if (check(base) == 0)
		return ;
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb >= len)
		ft_putnbr_base(nb / len, base);
	write(1, &base[nb % len], 1);
}
