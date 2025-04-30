/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:34:35 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/30 13:35:53 by virrasch         ###   ########.fr       */
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
	ptr = (char *)s;
	while (n)
	{
		ptr[pos] = (char)c;
		pos++;
		n--;
	}
	return (s);
}
