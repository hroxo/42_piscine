/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:15:03 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 18:15:06 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	if (nb < 0)
		return (0);
	nbr = 1;
	i = 1;
	while (i < nb + 1)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}
