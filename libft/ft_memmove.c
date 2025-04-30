/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:37:45 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/30 16:21:11 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memmove() function copies n bytes from memory area src to
//memory area dest.  The memory areas may overlap: copying takes
//place as though the bytes in src are first copied into a temporary
//array that does not overlap src or dest, and the bytes are then
//copied from the temporary array to dest.
//The memmove() function returns a pointer to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_ptr;
	char	*dest_ptr;

	if (!src || !dest)
		return (NULL);
	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (dest_ptr > src_ptr)
	{
		while (n > 0)
		{
			n--;
			dest_ptr[n] = src_ptr[n];
		}
	}
	else
		ft_memcpy(dest, (void *)src, n);
	return (dest);
}
