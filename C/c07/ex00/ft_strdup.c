/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:19:04 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/28 12:36:13 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
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
int main ()
{
	char *src = "Ola meu amor";
	char *str = ft_strdup(src);
	printf("%s", str);
	free(str);
}
