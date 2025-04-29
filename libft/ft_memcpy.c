/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:54:33 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/29 13:36:23 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//The memcpy() function copies n bytes from memory area src to
//memory area dest.  The memory areas must not overlap.  Use
//memmove(3) if the memory areas do overlap.
//The memcpy() function returns a pointer to dest.

void *ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	pos;
	char	*src_ptr;
	char	*dest_ptr;

	pos = 0;
	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	while (pos < n)
	{
		dest_ptr[pos] = src_ptr[pos];
		pos++;
	}

	return (dest);
}