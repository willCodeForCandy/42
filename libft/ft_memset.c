
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:11:40 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/22 15:45:58 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memset()  function  fills  the  first  n  bytes of the memory area
//pointed to by s with the constant byte c.
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		pos;
	char	*ptr;

	pos = 0;
	ptr = (char *)s; // aca convertimos el puntero s a un puntero char, porque no se puede hacer aritmética de punteros ni acceder a valores con un void *
	while (n)
	{
		ptr[pos] = (char)c;
		pos++;
		n--;
	}
	return (s);
}