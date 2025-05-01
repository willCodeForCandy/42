/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:18:12 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/01 17:59:48 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strnstr() function locates the first occurrence of the null-termi‐
//nated string little in the string big, where not more than len characters
//are searched.  Characters that appear after a ‘\0’ character are not
//searched.

//If little is an empty string, big is returned; if little occurs nowhere
//in big, NULL is returned; otherwise a pointer to the first character of
//the first occurrence of little is returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i + j] != '\0' && (i + j) < len)
	{
		if (big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}
