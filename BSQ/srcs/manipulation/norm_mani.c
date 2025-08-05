/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_mani.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/05 20:52:23 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_helper.h"
#include "ft_structs.h"
#include "ft_utils.h"

void	helper_map(int fd, int *first_line_len, int *x);

struct s_map	inicializer(void)
{
	struct s_map	map_rules;

	map_rules.map = NULL;
	map_rules.x_axis = 0;
	map_rules.y_axis = 0;
	map_rules.full = 0;
	map_rules.empty = 0;
	map_rules.obstacle = 0;
	return (map_rules);
}

char	*join_map(struct s_map map_rules, char *first_line, int fd)
{
	int		w;
	char	file_char;
	char	*output_map;

	w = 0;
	output_map = malloc(sizeof(char)
			* ((map_rules.x_axis * map_rules.y_axis) + 2));
	if (!output_map)
	{
		free(first_line);
		close(fd);
		ft_putstr(MAP_ERROR);
		exit(1);
		return (output_map);
	}
	while (read(fd, &file_char, 1))
	{
		output_map[w] = file_char;
		w++;
	}
	output_map[w] = '\n';
	w++;
	output_map[w] = 0;
	return (output_map);
}

struct s_map	input(char *first_line, int first_line_len, int x, int fd)
{
	struct s_map	map_rules;

	map_rules.full = first_line[first_line_len - 1];
	map_rules.obstacle = first_line[first_line_len - 2];
	map_rules.empty = first_line[first_line_len - 3];
	map_rules.y_axis = ft_natoi(first_line, (first_line_len - 3));
	map_rules.x_axis = x;
	map_rules.map = join_map(map_rules, first_line, fd);
	return (map_rules);
}

struct s_map	first_line_operator(int fd, int first_line_len,
		int x, char *file_name)
{
	struct s_map	map_rules;
	int				i;
	char			*first_line;
	char			file_char;

	i = 0;
	map_rules = inicializer();
	first_line = malloc(first_line_len + 1);
	if (!first_line)
	{
		close(fd);
		return (map_rules);
	}
	close(fd);
	fd = open(file_name, O_RDONLY);
	while (read(fd, &file_char, 1) && i < first_line_len)
	{
		first_line[i] = file_char;
		i++;
	}
	first_line[first_line_len] = 0;
	map_rules = input(first_line, first_line_len, x, fd);
	free(first_line);
	close(fd);
	return (map_rules);
}

struct s_map	rules(char *file_name, int x, int fd, int first_line_len)
{
	struct s_map	map_rules;

	map_rules = inicializer();
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		write (1, COMMAND_ERROR, ft_strlen(COMMAND_ERROR));
		return (map_rules);
	}
	helper_map(fd, &first_line_len, &x);
	map_rules = first_line_operator(fd, first_line_len, x, file_name);
	return (map_rules);
}
