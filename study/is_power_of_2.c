int is_power_of_2(int n)
{
	if (n == 1)
		return (1);
	else if (n > 1)
		is_power_of_2(n / 2);
	else
		return (0);
}

#include <stdio.h>
int main(int argc, char *argv[])
{

}
