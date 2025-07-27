/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:17:28 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 22:18:07 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	main(int argc, char *argv[])
{
	int	n;

	n = argc - 1;
	while (n > 0)
	{
		write(1, argv[n], ft_strlen(argv[n]));
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
