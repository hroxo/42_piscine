/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 22:18:48 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/27 23:54:49 by hroxo            ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
		n++;
	return (s1[n] - s2[n]);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	print_ascii_order(char **str, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
				swap(&str[j], &str[i]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		write(1, str[i], ft_strlen(str[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		print_ascii_order(argv + 1, argc - 1);
	return (0);
}
