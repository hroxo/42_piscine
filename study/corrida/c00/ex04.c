/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:49:24 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/25 10:52:49 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_is_negative(atoi(argv[1]));
}
