#include "header.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	char	c;
	int	result;

	if (argc != 4)
		return(1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strcmp(argv[2], "+") || ft_strcmp(argv[2], "-") 
			|| ft_strcmp(argv[2], "/")
			|| ft_strcmp(argv[2], "%")
			|| ft_strcmp(argv[2], "*")) 
		c = argv[2][0];
	if (b == 0 && (c == '%' || c == '/')) 
	{
		if (c == '/')
			puterror(1);
		else
			puterror(0);
		return (2);
	}
	result = do_op(a, b, c);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
