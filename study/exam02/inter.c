/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:12:01 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/31 19:23:47 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	write_without_du(char *str, char *base)
{
	int i = 0;
	int	j;
	int k;
	int	is_base = 0;
	int is_dub = 0;

	while(str[i])
	{
		j = 0;
		k = 0;
		is_base = 0;
		is_dub = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				is_base = 1;
			
			j++;
		}
		while (k < i)
		{
			if (str[i] == str[k])
				is_dub = 1;
			k++;
		}
		if (is_base == 1 && is_dub == 0)
			write (1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (1);
	}
	write_without_du(argv[1], argv[2]);
	return (0);
}
