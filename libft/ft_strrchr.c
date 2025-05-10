/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:54:45 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/10 17:26:41 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strrchr() function returns a pointer to the last occurrence of  the
//character c in the string s or NULL if the character is not found.
//The terminating null 
// byte is considered part of the string, so that if c is specified as '\0',
// these functions return a pointer to the terminator.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*aux;

	len = ft_strlen(s);
	if ((char)c == '\0')
	{
		aux = (char *)&s[len];
		return (aux);
	}
	while (len > 0)
	{
		if (s[len - 1] == (char)c)
		{
			aux = (char *)&s[len - 1];
			return (aux);
		}
		len--;
	}
	return (NULL);
}
