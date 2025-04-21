/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:23:30 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/09 18:31:01 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_valid(int argc, char *args, int clues[]);
void print_matrix(char grid[5][5], int size);
char draw[5][5] = {
	{ ' ', ' ', ' ', ' ', ' ' },
	{ ' ', '*', ' ', '*', ' ' },
	{ ' ', ' ', '*', ' ', ' ' },
	{ '*', ' ', ' ', ' ', '*' },
	{ ' ', '*', '*', '*', ' ' }};


int	main(int argc, char *argv[])
{
	int	clues[16];

	if (!is_valid(argc, argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		print_matrix(draw, 5);
	}
	return (0);
}
