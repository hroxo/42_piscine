#include <stdlib.h>
int	ft_strlen(char *src)
{
	int	n;

	n = 0;
	while(src[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if	(dest == 0)
		return (0);
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s\n", strdup("Ola estou na 42"));
	printf("%s\n", ft_strdup("Ola estou na 42"));
}
