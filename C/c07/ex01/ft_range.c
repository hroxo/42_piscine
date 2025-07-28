/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:45:31 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/28 19:03:59 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc((max - min) * 4);
	if (max <= min)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int main(int c, char **v)
{
	(void) c;
	int *tab = ft_range(atoi(v[1]), atoi(v[2]));
	for (int i = 0, dif =atoi(v[2]) -atoi(v[1]); i < dif; i++)
		printf("%i ", tab[i]);
}
