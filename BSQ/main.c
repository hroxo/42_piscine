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
	char			*map_char;

	map = rules(filename, 0, 0, 0);
	if (check_map_is_valid(map) == 1)
	{
		ft_putstr(MAP_ERROR);
		exit(1);
	}
	str = ft_remove_nl(map.map);
	map_char = ft_create_string( map.empty, map.obstacle, map.full);
	grid = create_grid(str, map.x_axis, map.y_axis, map_char);
	draw_bbq(grid, check_poss(grid, 0, 0), 0, 0);
	show_grid(grid, map_char);
}

// TODO : Correct the valid
// TODO : Set files from args
// TODO : get the charset into struct DONE
// Create grid (string, width, height, charset) DONE
int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("input error!!");
		return (1);
	}
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
	int	i;

	i = 1;
	while (i < argc)
	{
		execute_file(argv[i]);
		i++;
	}
	return (0);
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
