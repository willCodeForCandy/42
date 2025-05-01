/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:51:37 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/01 16:50:53 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memchr()  function  scans  the  initial n bytes of the memory area
//pointed to by s for the first instance of c.  Both c and the  bytes  of
//the memory area pointed to by s are interpreted as unsigned char.
//The  memchr()  and memrchr() functions return a pointer to the matching
//byte or NULL if the character does not occur in the given memory area.

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while ((unsigned char *)s && n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}