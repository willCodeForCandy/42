/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:54 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/02 12:26:42 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	pick_character(int width, int height, int row, int col)
{
	if (row == 1 && (col == 1 || col == width))
	{
		ft_putchar('A');
	}
	else if (row == height && (col == 1 || col == width))
	{
		ft_putchar('C');
	}
	else if (row == 1 || col == 1 || row == height || col == width)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
	{
		write(1, "Los parámetros deben ser números enteros mayor de 0.", 61);
	}
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			pick_character(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
