/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:53:27 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/20 10:56:09 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	loop(int i, int i_c, char *c)
{
	if (i_c == 0)
	{
		ft_putchar(c[0]);
	}
	else if (i_c == i - 1)
	{
		ft_putchar(c[2]);
	}
	else
	{
		ft_putchar(c[1]);
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
				loop (x, i_c, "/*\\");
			}
			else if (j_c == y - 1)
			{
				loop (x, i_c, "\\*/");
			}
			else
				loop (x, i_c, "* *");
			i_c++;
		}
		ft_putchar ('\n');
		j_c++;
	}
}
