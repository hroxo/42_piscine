/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_mani_helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:29:40 by ando-sou          #+#    #+#             */
/*   Updated: 2025/08/06 20:01:25 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_structs.h"
#include "ft_helper.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

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

void	bbq_with_sausage(unsigned int *totals, char *tmp, char *data, char *buf)
{
	unsigned int	i;

	i = 0;
	while (i < totals[0])
	{
		tmp[i] = data[i];
		i++;
	}
	i = 0;
	while (((unsigned int)i) < totals[1])
	{
		tmp[totals[0] + i] = buf[i];
		i++;
	}
	tmp[totals[0] + totals[1]] = '\0';
}

char	*read_all_fd(int fd, int *out_len, int total)
{
	char			buf[BUF_SIZE];
	char			*data;
	char			*tmp;
	unsigned int	bytes;

	data = NULL;
	bytes = read(fd, buf, sizeof(buf));
	while (bytes > 0)
	{
		tmp = malloc(total + bytes + 1);
		if (!tmp)
		{
			free(data);
			return (NULL);
		}
		bbq_with_sausage((unsigned int [2]){total, bytes}, tmp, data, buf);
		free(data);
		data = tmp;
		total += bytes;
		bytes = read(fd, buf, sizeof(buf));
	}
	if (out_len)
		*out_len = total;
	return (data);
}

void	helper_map(char *buf, int *first_line_len, int *x)
{
	int		new_line_counter;
	int		count_every_char;
	int		i;

	i = 0;
	count_every_char = 0;
	new_line_counter = 0;
	while ((buf[i] && new_line_counter < 2))
	{
		if (buf[i] == '\n')
			new_line_counter++;
		else
			if (new_line_counter == 0)
				(*first_line_len)++;
		count_every_char++;
		i++;
	}
	count_every_char -= *first_line_len;
	if (new_line_counter < 2 || count_every_char <= 2)
	{
		*x = -1;
		return ;
	}
	*x = count_every_char - 1;
}

int	contains_characters(char *buffer)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	while (buffer[i])
	{
		if (buffer[i] != '\n')
		{
			flag = 1;
			break ;
		}
		i++;
	}
	return (flag);
}
