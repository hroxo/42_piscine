/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:07:41 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 19:46:30 by hroxo            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
