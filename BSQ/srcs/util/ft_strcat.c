/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:02:53 by ando-sou          #+#    #+#             */
/*   Updated: 2025/07/23 21:53:46 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[100] = "World!";
	char b[100] = "Hello ";
	char c[100] = "Hello ";

	printf("%s = %s : %s\n", strcat(b, a), b, a);
	printf("%s = %s : %s\n", ft_strcat(c, a), c, a);
	return 0;
}*/
