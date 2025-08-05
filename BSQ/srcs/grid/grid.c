/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:51:49 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/05 20:58:08 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_utils.h"
#include "ft_helper.h"

int	*create_line(int board_w, char *board, char *chars, int i)
{
	int	*line;
	int	j;

	j = -1;
	line = malloc((board_w + 1) * sizeof(int));
	if (!line)
		return (NULL);
	while (++j < board_w)
	{
		if (board[i * board_w + j] == chars[1])
			line[j] = 0;
		else
			line[j] = 1;
	}
	line[j] = -2;
	return (line);
}

// Null terminated grid
int	**create_grid(char *board, long board_w, long board_h, char *chars)
{
	int		**grid;
	long	i;

	i = -1;
	grid = malloc((board_h + 1) * sizeof(int *));
	if (!grid)
	{
		ft_putstr(MALLOC_ERROR);
		return (NULL);
	}
	while (++i < board_h)
		grid[i] = create_line(board_w, board, chars, i);
	grid[i] = NULL;
	return (grid);
}

void	bbq(int **grid, int j, int i, int max)
{
	int	y;
	int	x;

	y = i;
	while (y > i - max)
	{
		x = j;
		while (x > j - max)
		{
			grid[y][x] = 2;
			x--;
		}
		y--;
	}
}

void	draw_bbq(int **grid, int max, int i, int j)
{
	int		found;

	found = 1;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j] != -2)
		{
			if (grid[i][j] == max && found == 1)
			{
				found = 0;
				bbq(grid, j, i, max);
			}
			else
			{
				if (grid[i][j] != 0)
					grid[i][j] = 0;
				else
					grid[i][j] = 1;
			}
			j++;
		}
		i++;
	}
}

void	show_grid(int **grid, char *charsets)
{
	long	i;
	long	j;

	i = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j] != -2)
		{
			ft_putchar(charsets[grid[i][j]]);
			j++;
		}
		free(grid[i]);
		ft_putchar('\n');
		i++;
	}
	free(grid);
}
