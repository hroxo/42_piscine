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
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	char	*out;
	int		len;

	if (size < 1)
		return (0);
	len = 0;
	n = 0;
	while (n < size)
	{
		len += ft_strlen(strs[n]);
		if (n < size - 1)
			len += ft_strlen(sep);
		n++;
	}
	out = malloc(len + 1);
	i = 0;
	out[0] = 0;
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		if (n < size - 1)
			ft_strcat(out, sep);
		i++;
	}
	return (out);
}

#include <stdio.h>
int	main (int argc, char **argv)
{
	(void) argc;
	char *arr = ft_strjoin(3, argv, "//");
	printf("%s", arr);
	free(arr);
}
