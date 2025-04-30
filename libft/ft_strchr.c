/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:03:51 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/30 13:15:46 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() and strrchr() functions return a pointer to the matched 
// character or NULL if the character is not found.  The terminating null 
// byte is considered part of the string, so that if c is specified as '\0',
// these functions return a pointer to the terminator.
//The  strchr() function returns a pointer to the first occurrence of the
//character c in the string s or NULL if the character is not found.

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
