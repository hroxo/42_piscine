/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:47:38 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/26 20:56:45 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (0);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	printf("the result is %i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
