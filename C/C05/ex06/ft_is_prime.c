/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:16:47 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 19:51:55 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nbr;
	int	score;

	score = 0;
	nbr = nb;
	if (nb < 2)
		return (0);
	while (nbr > 1)
	{
		if (nb % nbr == 0)
			score++;
		nbr--;
	}
	if (score > 1)
		return (0);
	return (1);
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("if 1 is prime: %i", ft_is_prime(atoi(argv[1])));
}
