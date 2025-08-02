/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:16:59 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/19 17:51:46 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	number[10];
	int		n;
	char	minnus;

	minnus = '-';
	n = 9;
	if (nb < 0)
	{
		write (1, &minnus, 1);
		nb = -nb;
	}
	while (nb / 10 != 0)
	{
		number[n] = nb % 10 + '0';
		nb /= 10;
		n--;
	}
	number[n] = nb + '0';
	write(1, &number[n], 10 - n);
	write(1, '\0', 1);
}
