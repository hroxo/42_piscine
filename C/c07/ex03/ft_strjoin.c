/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:27:53 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/28 22:08:58 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	n;

	n = 0;
	while (src[n])
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	n = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = 0;
	return (dest);
}
int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*output;

	if (size < 1)
	{
		output = malloc(1);
		if (output == 0)
			return (output);
		output[0] = 0;
		return (output);
	}
	output = malloc(total_len(size, strs, sep));
	i = 0;
	if (output == 0)
		return (0);
	output[0] = 0;
	while (i < size)
	{
		ft_strcat(output, strs[i]);
		if (i < size - 1)
			ft_strcat(output, sep);
		i++;
	}
	return (output);
}

#include <stdio.h>
int	main ()
{
	char *strings[] = {"Olá", "mundo", "42", "estou", "cansado"};
	char *joined = ft_strjoin(7, strings, "//");
	printf("%s\n", joined);
	free(joined);

}
