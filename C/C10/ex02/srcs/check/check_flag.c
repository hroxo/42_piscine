#include "header.h"

int	check_flag(char *c_flag, char *nbyte)
{
	int	n;

	n = 0;
	if (ft_strcmp(c_flag, "-c"))
		return (1);
	while (nbyte[n])
	{
		if (!(nbyte[n] <= '9' && nbyte[n] >= '0'))
			return (1);
		n++;
	}
	return (0);
}
