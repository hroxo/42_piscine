/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:09:14 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/05 21:06:43 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_grid.h"
#include "ft_utils.h"
#include "ft_helper.h"
#include "ft_solver.h"
#include "ft_structs.h"

void super_show(int **grid, int i, int j);

void execute_file(char *filename)
{
	struct s_map	map;
	char			*str;
	int				**grid;

	map = rules(filename, 0, 0, 0);
	if (check_map_is_valid(map) == 0)
	{
		ft_putstr(MAP_ERROR);
		exit(1);
	}
	str = ft_remove_nl(map.map);
	grid = create_grid(str, map.x_axis, map.y_axis, ".ox");
	draw_bbq(grid, check_poss(grid, 0, 0), 0, 0);
	show_grid(grid, ".ox");
}

// TODO : Correct the valid
// TODO : Set files from args
// TODO : get the charset into struct
// Create grid (string, width, height, charset)
int	main(void)
{
	/*
	char *str = ft_remove_nl(".oo.o.o.o.\n..o..o...o\n.ooo.o..oo\n.oo..ooo..\no.o..o.oo.\n");
	
	printf("\n%s\n\n", str);
	int **grid = create_grid(str, 10, 5, ".ox");

	get_around(grid, 0, 0, 3);
	get_around(grid, 1, 1, 2);
	super_show(grid, -1, -1);
	printf("\n");
	int x = check_poss(grid, 0, 0);
	super_show(grid, -1, -1);
	printf("\n");
	draw_bbq(grid, x, 0, 0);
	super_show(grid, -1, -1);
	printf("\n");
	printf("%i\n", x);

	//int height = 5;
	//int width = 4;
	show_grid(grid, ".ox");*/
	execute_file("test");
}

void super_show(int **grid, int i, int j)
{
	while (grid[++i])
	{
		j = -1;
		while (grid[i][++j] != -2)
			printf("%i", grid[i][j]);
		printf("\n");
	}
}
