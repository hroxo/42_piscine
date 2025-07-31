int is_power_of_2(int n)
{
	if (n < 1)
		return (0);
	else if (n == 1)
		return (1);
	else if (n % 2 != 0)
		return (0);
	return (is_power_of_2(n / 2));
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%i", is_power_of_2(atoi(argv[1])));
}
