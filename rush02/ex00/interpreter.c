/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:00:53 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/16 19:06:18 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	interpreter(char *str)
{
	int		fd;
	char	*buffer;
	char	*number;

	fd = open("numbers.dict", O_RDONLY);
	buffer = malloc(10000);
	if (fd == -1)
	{
		ft_printstr("Dict Error");
		return ;
	}
	while ((read(fd, buffer, 10000)) > 0)
	{
		number = ft_strstr(buffer, str);
		if (number)
			write_number(number);
		else
			ft_printstr("Dict Error");
	}
	free(buffer);
	close(fd);
}

void	interpreter2(char *dict, char *str)
{
	int		fd;
	char	*buffer;
	char	*number;

	fd = open(dict, O_RDONLY);
	buffer = malloc(10000);
	if (fd == -1)
	{
		ft_printstr("Dict Error");
		return ;
	}
	while ((read(fd, buffer, 10000)) > 0)
	{
		number = ft_strstr(buffer, str);
		if (number)
			write_number(number);
		else
			ft_printstr("Dict Error");
	}
	free(buffer);
	close(fd);
}
