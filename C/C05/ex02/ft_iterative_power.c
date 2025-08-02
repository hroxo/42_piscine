/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:47:38 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 00:09:30 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	number = nb;
	while (power > 1)
	{
		nb *= number;
		power--;
	}
	return (nb);
}
