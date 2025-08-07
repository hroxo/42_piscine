#include <unistd.h>

int main(void)
{
	char c;
	int i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
			c = i + 'a';
		else
			c = i + 'A';
		write (1, &c, 1);
		i++;
	}
}
