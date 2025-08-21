#include "struct.h"
#include <unistd.h>
#include <stdlib.h>
#include "header.h"

static t_map	*new_house(t_map *old, int cap, int size)
{
	int	i;
	t_map *new_s;
	int	j;

	i = 0;
	new_s = malloc(sizeof(t_map) * cap + 1);
	if(!new_s)
	{
		free(old);
		return (NULL);
	}
	while (i < size)
	{
		new_s[i].letter = old[i].letter;
		j = 0;
		while (j < 3)
		{
			new_s[i].hex_value[j] = old[i].hex_value[j];
			j++;
		}
		i++;
	}
	free(old);
	return (new_s);
}

t_map *file_to_string(int fd, int *size)
{
	t_map	*file_string;
	char	buf;
	int		reader;
	t_map	*temp;
	int		cap;
	int		i;

	i = 0;
	cap = 1024;
	reader = read(fd, &buf, 1);
	file_string = malloc(sizeof(t_map) * cap);
	if (!file_string)
	{
		return (NULL);
	}
	while (reader > 0)
	{
		if (i >= cap)
		{
			cap = cap * 2;
			temp = new_house(file_string, cap, i);
			file_string = temp;
		}
		file_string[i].letter = buf;
		convert_to_hex(buf, file_string[i].hex_value);
		reader = read(fd, &buf, 1);
		i++;
	}
	*size = i;
	return (file_string);
}
