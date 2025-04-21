/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print-matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:56:29 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/09 18:23:05 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(char grid[5][5], int size)
{
	int	row;
	int	col;
	char	c;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			c = grid[row][col];
			write(1, &c, 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
