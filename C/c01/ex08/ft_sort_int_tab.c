/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:27:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/19 20:05:57 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;
	int	n;

	n = size - 1;
	while (n > 0)
	{
		i = size - 1;
		while (i > 0)
		{
			j = i - 1;
			if (tab[i] < tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			i--;
		}
		n--;
	}
}
