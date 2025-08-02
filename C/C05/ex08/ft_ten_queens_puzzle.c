/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:48:56 by hroxo             #+#    #+#             */
/*   Updated: 2025/07/29 19:44:26 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	rules(int x, int *board)
{
	int	i;
	int	relative;

	i = 0;
	while (i < x)
	{
		relative = board[i] - board[x];
		if (relative > 0)
			relative *= -1;
		if ((relative == 0) || (i - x == relative))
			return (0);
		i++;
	}
	return (1);
}

void	print_board(int *board)
{
	int	i;
	int	a;

	i = 0;
	while (i < 10)
	{
		a = board[i] + '0';
		write (1, &a, 1);
		i++;
	}
	write (1, "\n", 1);
}

void	backtrack_queens(int x, int *comb, int *board)
{
	int	i;

	i = 0;
	if (x == 10)
	{
		*comb += 1;
		print_board(board);
		return ;
	}
	while (i < 10)
	{
		board[x] = i;
		if (rules(x, board) != 0)
			backtrack_queens(x + 1, comb, board);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	comb;
	int	board[10];
	int	i;

	comb = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	backtrack_queens(0, &comb, board);
	return (comb);
}
