/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:19:23 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/05 18:26:12 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_structs.h"    // onde está a definição de struct s_map
#include "ft_helper.h"     // se usares ft_strlen e afins
#include "ft_utils.h"      // onde está ft_natoi (provavelmente)
#include <unistd.h>
#include <stdlib.h>

struct s_map    rules(char *file_name, int x, int fd, int *first_line_len);
int	check_map_is_valid(struct s_map	map);

int main(void)
{
    struct s_map map;
	map = rules("test" , 0, 0, 0);
//	printf("str:\n%s\nx_axis: %i\ny_axis: %i\n", map.map, map.x_axis, map.y_axis);
	if (check_map_is_valid(map) == 1)
	{
		printf("ERRO CARALHO");
		return (1);
	}

	printf("Full char: %c\n", map.full);
    printf("Obstacle char: %c\n", map.obstacle);
    printf("Empty char: %c\n", map.empty);
    printf("Y Axis: %d\n", map.y_axis);
    printf("X Axis: %d\n", map.x_axis);
    printf("Map:\n%s\n", map.map);

    if (map.map)
        free(map.map);
    return 0;
}
