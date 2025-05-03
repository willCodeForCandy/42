/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:51:37 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/03 10:22:37 by virginia         ###   ########.fr       */
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
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}