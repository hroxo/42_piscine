/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:38:34 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/07 11:33:50 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 32 || argv[1][i] == 9)
		{
			w = 0;
			while(argv[1][i + w] && (argv[1][i + w] == 32 || argv[1][i + w] == 9))
				w++;
			if (i != 0 && argv[1][i + w] != 0)
				write(1, " ", 1);
			i += w;
		}
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
