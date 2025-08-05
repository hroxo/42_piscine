/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:27:16 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/05 20:28:25 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_structs.h"
#include "ft_helper.h"
#include "ft_utils.h"
#include <unistd.h>
#include <stdlib.h>

int	verify_map(struct s_map map, int w)
{
	int	i;

	i = 0;
	while (i < w - 1)
	{
		if ((i + 1) % map.x_axis == 0)
		{
			if (map.map[i] != '\n' && map.map[i] != 0)
				return (1);
		}
		else
		{
			if (!(map.map[i] == map.full
				|| map.map[i] == map.obstacle
				|| map.map[i] == map.empty))
				return (1);
		}
		i++;
	}
	return (0);
}

int	check_map_is_valid(struct s_map map)
{
	int	area;
	int	w;

	area = map.x_axis * map.y_axis;
	w = ft_strlen(map.map);
	if ((w - 1) != area)
		return (1);
	if (map.full == map.obstacle
		|| map.full == map.empty
		|| map.empty == map.obstacle)
		return (1);
	if (map.y_axis != (w / map.x_axis))
		return (1);
	if (verify_map(map, w) == 1)
		return (1);
	return (0);
}
