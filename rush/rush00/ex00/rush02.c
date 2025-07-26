/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:53:27 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/19 16:48:09 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	loop(int i, int i_c, char c1, char c2)
{
	if (i_c == 0 || i_c == i - 1)
	{
		ft_putchar(c1);
	}
	else
	{
		ft_putchar(c2);
	}
}

void	rush(int x, int y)
{
	int	i_c;
	int	j_c;

	j_c = 0;
	while (j_c < y)
	{
		i_c = 0;
		while (i_c < x)
		{
			if (j_c == 0)
			{
				loop (x, i_c, 'A', 'B');
			}
			else if (j_c == y - 1)
			{
				loop (x, i_c, 'C', 'B');
			}
			else
				loop (x, i_c, 'B', 32);
			i_c++;
		}
		ft_putchar ('\n');
		j_c++;
	}
}
