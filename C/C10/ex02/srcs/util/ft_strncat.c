char	*ft_strncat(char *dest, char *src, int size)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] && n < size)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = 0;
	return (dest);
}
