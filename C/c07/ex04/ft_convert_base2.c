#include <stdlib.h>
int	ft_atoi_base(char *str, char *base);

int	check(char *base);

int	ft_strlen(char *base);

char *nbr_to_base(int nbr, char *base)
{
	int		i;
	int 	len;
	char	out[11];
	int		neg;

	neg = 0;
	len = ft_strlen(base);
	i = 10;
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	if (nbr == 0)
		return(base[0]);
	while (nbr / 10 != 0)
	{
		out[i] = base[nbr % len];
		nbr /= 10;
		i--;
	}
	if (neg == 1)
	{
		out[i] = '-';
		i--;
	}
	return (out);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*out;
	int		size;
	int		temp;
	int		len;

	len = ft_strlen(base_to);
	temp = nbr;
	if(temp < 0)
	{
		temp *= -1;
		size++;
	}
	while (temp)
	{
		temp /= len
		size++;
	}
	out = malloc(size + 1);
	if (out == 0)
			return (0);
	out[size] = 0;
	if (check(base_to) == 0 || check(base_from) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	out = nbr_to_base(nb, base_to, &i);
	return (out);
}

#include <stdio.h>
int	main(int argc, char **arggv)
{
	char	out =  ft_convert_base(argv[1], argv[2], argv[3])
	printf("%s", out);
	free(out);
}
