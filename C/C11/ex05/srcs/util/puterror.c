#include <unistd.h>

void	puterror(int e)
{
	if (e == 1)
		write (1, "Stop : division by zero\n", 24);
	else
		write (1, "Stop : modulo by zero\n", 22);

}
