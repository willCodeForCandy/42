/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:37:45 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/29 18:24:34 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies n bytes from memory area src to
//memory area dest.  The memory areas may overlap: copying takes
//place as though the bytes in src are first copied into a temporary
//array that does not overlap src or dest, and the bytes are then
//copied from the temporary array to dest.
//The memmove() function returns a pointer to dest.

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	pos;
	char	*src_ptr;
	char	*dest_ptr;
	char	*buffer;

	pos = 0;
	src_ptr = (char *)src;
	while (pos < n)
	{
		buffer[pos] = src_ptr[pos]; //ACA HAY UN PROBLEMA
		pos++;
	}
	while (n)
	{
		dest_ptr[n] = buffer[n];
		n--;
	}
	return (dest);
}