/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/04 20:44:34 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_helper.h"
#include "ft_structs.h"
#include "ft_utils.h"

struct s_map	inicializer(void)
{
	struct s_map map_rules;

    map_rules.map = NULL;
    map_rules.x_axis = 0;
    map_rules.y_axis = 0;
    map_rules.full = 0;
    map_rules.empty = 0;
    map_rules.obstacle = 0;
	return (map_rules);
}

struct s_map	rules(char *file_name)
{
	int				fd;
	char			file_char;
	char			*first_line;
	int				first_line_len;
	struct s_map	map_rules;
	int				find_new_line;
	int				x;
	int				w;
	int				new_line_counter;
	int				i;

	map_rules = inicializer();
	i = 0;
	w = 0;
	find_new_line = 0;
	first_line_len = 0;
	new_line_counter = 0;
	x = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		write (1, COMMAND_ERROR, ft_strlen(COMMAND_ERROR));
		return (map_rules);
	}
	while(read(fd, &file_char, 1) && new_line_counter < 2)
	{
		if (file_char == '\n')
			new_line_counter++;
		else
		{
			if (new_line_counter == 0)
				first_line_len++;
			else
				x++;
		}
	}
	first_line = malloc(first_line_len + 1);
	if (!first_line)
    {
		close(fd);
		return map_rules;
    }
	close(fd);
	fd = open(file_name, O_RDONLY);
	while (read(fd, &file_char, 1) && i < first_line_len)
	{
		first_line[i] = file_char;
		i++;
	}
	first_line[first_line_len] = 0;
	map_rules.full = first_line[first_line_len - 1];
	map_rules.obstacle = first_line[first_line_len - 2];
	map_rules.empty = first_line[first_line_len - 3];
	map_rules.y_axis = ft_natoi(first_line, (first_line_len - 3));
	map_rules.x_axis = x; 
	map_rules.map = malloc(sizeof(char) * ((map_rules.x_axis * map_rules.y_axis) + 1));
	if (!map_rules.map)
	{
		free(first_line);
		close(fd);
		return (map_rules);
	}
	while(read(fd, &file_char, 1))
	{
		if (file_char != '\n')
		{
			map_rules.map[w] = file_char;
			w++;
		}
	}
	map_rules.map[w] = 0;
	free(first_line);
	close(fd);
	return (map_rules);
}
