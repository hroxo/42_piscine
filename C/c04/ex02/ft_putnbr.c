/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:01:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/23 08:46:16 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	bound(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	char	number[11];
	int		i;
	int		pos_neg;

	pos_neg = 0;
	i = 10;
	bound(nb);
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		pos_neg++;
	}
	while (nb > 0)
	{
		number[i--] = nb % 10 + '0';
		nb /= 10;
	}
	if (pos_neg == 1)
		number[i] = '-';
	else
		i++;
	write (1, &number[i], 11 - i);
}
