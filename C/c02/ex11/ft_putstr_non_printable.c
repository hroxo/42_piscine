/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:08:24 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/21 11:31:37 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	to_hexa(char c, char hex[4])
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 1;
	hex[0] = '\\';
	hex[1] = c / 16;
	hex[2] = c % 16;
	while (i < 3)
	{
		if (hex[i] > 9)
			hex[i] = hex[i] - 10 + 'a';
		else
			hex[i] += '0';
		i++;
	}
	hex[3] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[4];

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
		{
			to_hexa(str[i], hex);
			write(1, hex, 4);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
