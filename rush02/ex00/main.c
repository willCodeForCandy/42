/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:56:05 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/16 18:57:08 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	if (argc == 2 && is_number(argv[1]))
		interpreter(argv[1]);
	else if (argc == 3 && is_number(argv[2]))
		interpreter2(argv[1], argv[2]);
	else
		ft_printstr("Error");
	return (0);
}
