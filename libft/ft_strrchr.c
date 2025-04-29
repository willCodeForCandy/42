/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:54:45 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/29 19:34:01 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() and strrchr() functions return a pointer to the matched 
// character or NULL if the character is not found.  The terminating null 
// byte is considered part of the string, so that if c is specified as '\0',
// these functions return a pointer to the terminator.
//The strrchr() function returns a pointer to the last occurrence of  the
//character c in the string s or NULL if the character is not found.

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t    len;
    char    *aux;
    char  c1;
	
	c1= (char)c;
    len = ft_strlen(s);
    if (c1 == '\0')
        {
            aux = (char *)&s[len];
            return aux;
        }
    while (len > 0)
    {
        if (s[len] == c1)
        {
            aux = (char *)&s[len];
            return aux;
        }
        len--;
    }
    return (0);
}