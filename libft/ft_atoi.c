/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi .c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 07:15:43 by virginia          #+#    #+#             */
/*   Updated: 2025/05/03 10:01:43 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  atoi() function converts the initial portion of the string pointed
//to by nptr to int
//The  string may begin with an arbitrary amount of white space (as determined by isspace(3)) followed by a sin‐
//gle optional '+' or '-' sign.
//stopping at the first  character  which  is not a valid digit
//Returns the converted value, or 0 on error.

#include "libft.h"

int	ft_isspace(char c)
{
	return ((c == 32 || (c >= 9 && c <= 13)));
}

int ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		{
		    if (*nptr == '-')
			    sign = -1;
			nptr++;
		}
	while (ft_isdigit(*nptr))
		{
			result = result*10 + *nptr-48;
			nptr++;
		}
	return (result * sign);
}