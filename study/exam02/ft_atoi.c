int	ft_atoi(const char *str)
{
	int n = 0;
	int	sig = 1;
	int	out = 0;

	while (str[n] == ' ' || (str[n] > 8 && str[n] < 14))
		n++;
	if (str[n] == '-')
	{
		sig = -1;
		n++;
	}
	while (str[n] <= '9' && str[n] >= '0')
	{
		out = (str[n] - '0') + out * 10;
		n++;
	}
	return (out * sig);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("ft_atoi: %i\n", ft_atoi("42"));
	printf("atoi: %i\n", atoi("42"));
	printf("ft_atoi: %i\n", ft_atoi("--42"));
	printf("atoi: %i\n", atoi("--42"));
	printf("ft_atoi: %i\n", ft_atoi("    42"));
	printf("atoi: %i\n", atoi("     42"));
	printf("ft_atoi: %i\n", ft_atoi("   \n42"));
	printf("atoi: %i\n", atoi("   \n42"));
	printf("ft_atoi: %i\n", ft_atoi("42ad32"));
	printf("atoi: %i\n", atoi("42ad42"));
}
