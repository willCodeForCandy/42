/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:19:39 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/10 17:48:47 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The comparison is done using  unsigned characters.
//The  strncmp() compares only the first (at most) n bytes of s1 and s2.
//Returns
//0, if the s1 and s2 are equal;
//a negative value if s1 is less than s2;
//a positive value if s1 is greater than s2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && *s1 && *s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		n--;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
