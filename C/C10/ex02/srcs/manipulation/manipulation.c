#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

#define BUF_SIZE 1024

char	 *tail_text(int fd, int bit_cap)
{
	char	*temp;
	int		f_r;
	char	buf[BUF_SIZE];
	char	*file_text;
	char	*tot;
	int		size;
	int		i;
	int		current_cap;

	current_cap = BUF_SIZE;
	i = 0;
	size = 0;
	f_r = read(fd, buf, BUF_SIZE);
	file_text = malloc (sizeof(char) * BUF_SIZE + 1);
	if (!file_text)
		return (NULL);
	file_text[0] = 0;
	file_text = ft_strncat(file_text, buf, BUF_SIZE);
	size += f_r;
	while (f_r > 0)
	{
		if (size + f_r >= current_cap)
		{
			current_cap = (size + f_r) * 2;
			temp = malloc (sizeof(char) * current_cap);
			if (!temp)
			{
				free(file_text);
				return (NULL);
			}
			ft_strcpy(temp, file_text);
			free(file_text);
			file_text = temp;
		}
		file_text = ft_strncat(file_text, buf, f_r);
		size += f_r;
		f_r = read(fd, buf, BUF_SIZE);
	}
	if (size <= bit_cap)
	{	
		bit_cap = 0;
		tot = malloc(sizeof(char) * size + 1);
		size = 0;
	}
	else
	{
		size -= bit_cap;
		tot = malloc(sizeof(char) * bit_cap);
	}
	if (!tot)
		return (NULL);
	while (file_text[size])
	{
		tot[i] = file_text[size];
		size++;
		i++;
	}
	tot[i] = 0;
	free(file_text);
	return (tot);
}
