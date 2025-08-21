#ifndef HEADER_H
#define HEADER_H

#include "struct.h"

void	convert_to_hex(char c, char *out);
void	ft_putstr(char *str);
t_map	*file_to_string(int fd, int *size);

#endif
