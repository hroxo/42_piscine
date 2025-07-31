/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:25:04 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/31 19:50:26 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	check_last_word(char *str)
{
	int	n = 0;

	while (str[n])
		n++;
	while (!(str[n] == 9 || str[n] == 32) || n == 0)
		n--;
	while (str[n])
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	check_last_word(argv[1]);
}
