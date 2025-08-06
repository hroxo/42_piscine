/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:34:51 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 19:19:03 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_around(int **grid, int x, int y, int n)
{
	int	i;
	int	j;
	int	good;

	i = 0;
	good = 1;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (grid[y + j][x + i] < 1)
			{
				good = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	if (good == 1 && grid[y + n - 1][x + n - 1] < n)
		grid[y + n - 1][x + n - 1] = n;
	return (good);
}

int	check_poss(int **grid, int x, int y)
{
	int	j;
	int	max;

	max = -1;
	while (grid[y] != NULL)
	{
		j = 1;
		while (get_around(grid, x, y, j))
		{
			if (j > max)
				max = j;
			j++;
			if (grid[y + j - 1] == NULL || grid[y][x + j - 1] == -2)
				break ;
		}
		x++;
		if (grid[y][x] == -2)
		{
			y++;
			x = 0;
		}
	}
	return (max);
}
