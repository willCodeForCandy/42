/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:03:51 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/30 17:09:40 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() and strrchr() functions return a pointer to the matched 
// character or NULL if the character is not found.  The terminating null 
// byte is considered part of the string, so that if c is specified as '\0',
// these functions return a pointer to the terminator.
//The  strchr() function returns a pointer to the first occurrence of the
//character c in the string s or NULL if the character is not found.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}
