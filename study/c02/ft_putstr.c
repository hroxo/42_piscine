/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 08:20:19 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/25 08:27:04 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while(str[n])
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv[1]);
}
