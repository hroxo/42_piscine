/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:46:14 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 20:04:11 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_structs.h"
#include "ft_stdin.h"
#include "ft_utils.h"
#include "ft_helper.h"
#include "ft_grid.h"
#include "ft_solver.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void	operate_map(int fd)
{
	struct s_map	map;
	int				**grid;
	char			*str;
	char			*map_char;

	map = rules_stdin(fd, 0, 0);
	if (map.map == NULL || check_map_is_valid(map) == 1)
	{
		ft_putstr(MAP_ERROR);
		return ;
	}
	str = ft_remove_nl(map.map);
	map_char = ft_create_string(map.empty, map.obstacle, map.full);
	if (map_char == NULL)
	{
		free(str);
		return ;
	}
	grid = create_grid(str, map.x_axis - 1, map.y_axis, map_char);
	draw_bbq(grid, check_poss(grid, 0, 0), 0, 0);
	show_grid(grid, map_char);
}

int	main(int argc, char **argv)
{
	int				fd;
	int				i;

	i = 1;
	fd = 0;
	if (argc == 1)
		operate_map(fd);
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			operate_map(fd);
			if (i != argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
