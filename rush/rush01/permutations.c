/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:06:09 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/26 23:08:30 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	permutations(int matrix[24][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	matrix[0][0] = a;
	matrix[0][1] = b;
	matrix[0][2] = c;
	matrix[0][3] = d;
	while (i < 24)
	{
		while ((matrix[i][j] == matrix[i + 1][j]) || j == 4)
		{
			swap(matrix[i + 1][j], matrix[i + 1][j]);
			j++;
		}
	}
}
