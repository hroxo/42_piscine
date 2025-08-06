/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_mani.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:45:23 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 20:03:36 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "ft_helper.h"
#include "ft_structs.h" 
#include "ft_utils.h"
#include "ft_stdin.h"

#define BUF_SIZE 1024

int	contains_characters(char *buffer);

void	join_map_helper(char *buf, char *o_m)
{
	int	i;
	int	w;
	int	flag;

	i = 0;
	w = 0;
	flag = 0;
	while (buf[i])
	{
		if (buf[i] == '\n' && flag == 0)
			flag = 1;
		else if (flag == 1)
		{
			o_m[w] = buf[i];
			w++;
		}
		i++;
	}
	o_m[w] = '\n';
	o_m[w + 1] = 0;
}

char	*join_map(struct s_map map_rules, char *first_line, char *buf)
{
	char	*output_map;
	int		fl;

	fl = 0;
	output_map = malloc(sizeof(char)
			* ((map_rules.x_axis * map_rules.y_axis) + 2));
	if (!output_map)
	{
		free(first_line);
		return (NULL);
	}
	join_map_helper(buf, output_map);
	return (output_map);
}

struct s_map	input(char *first_line, int first_line_len, int x, char *buf)
{
	struct s_map	map_rules;

	map_rules.full = first_line[first_line_len - 1];
	map_rules.obstacle = first_line[first_line_len - 2];
	map_rules.empty = first_line[first_line_len - 3];
	map_rules.y_axis = ft_natoi(first_line, (first_line_len - 3));
	map_rules.x_axis = x;
	map_rules.map = join_map(map_rules, first_line, buf);
	return (map_rules);
}

struct s_map	first_line_operator(char *buf, int first_line_len, int x)
{
	struct s_map	map_rules;
	int				i;
	int				j;
	char			*first_line;

	i = 0;
	map_rules = inicializer();
	first_line = malloc(first_line_len + 1);
	if (!first_line)
	{
		free(first_line);
		return (map_rules);
	}
	j = 0;
	while (buf[j] && i < first_line_len)
	{
		first_line[i] = buf[j];
		i++;
		j++;
	}
	first_line[first_line_len] = 0;
	map_rules = input(first_line, first_line_len, x, buf);
	free(first_line);
	return (map_rules);
}

struct s_map	rules_stdin(int fd, int x, int first_line_len)
{
	struct s_map	map_rules;
	char			*buffer;

	map_rules = inicializer();
	buffer = read_all_fd(fd, NULL, 0, -1);
	if (!buffer)
		return (map_rules);
	if (!contains_characters(buffer))
		return (map_rules);
	helper_map(buffer, &first_line_len, &x);
	map_rules = first_line_operator(buffer, first_line_len, x);
	return (map_rules);
}
