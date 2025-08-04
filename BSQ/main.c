/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:09:14 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/04 19:10:00 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_grid.h"
#include "ft_utils.h"

int	main(void)
{
	char *str = ".......o.";
	int **grid = create_grid(str, 3, 3, ".ox");

	int i = -1;
	while (++i < 3)
	{
		int j = -1;
		while (++j < 3)
			printf("%i", grid[i][j]);
		printf("\n");
	}

	show_grid(grid, ".ox");
}
