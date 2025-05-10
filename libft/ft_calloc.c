/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:35:32 by virginia          #+#    #+#             */
/*   Updated: 2025/05/10 10:53:12 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The calloc() function allocates memory for an array of  nmemb  elements
//of  size bytes each and returns a pointer to the allocated memory.  The
//memory is set to zero.  If nmemb or size is 0, then calloc() returns  a
//unique pointer value that can later be successfully passed to free().

//If  the  multiplication of nmemb and size would result in integer over‐
//flow, then calloc() returns an error.

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*mem_ptr;

	total_size = nmemb * size;
	mem_ptr = (void *)malloc(total_size);
	if (!mem_ptr)
		return (NULL);
	ft_bzero(mem_ptr, total_size);
	return (mem_ptr);
}