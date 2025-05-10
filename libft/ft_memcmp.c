/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:57:16 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/10 17:50:51 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//greater than zero if the first n bytes of s1 is found, respectively, to
//be less than, to match, or be greater than the first n bytes of s2.

//For a nonzero return value, the sign is determined by the sign  of  the
//difference  between  the  first  pair of bytes (interpreted as unsigned
//char) that differ in s1 and s2.

//If n is zero, the return value is zero.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (*un_s1 != *un_s2)
			return (*un_s1 - *un_s2);
		n--;
		un_s1++;
		un_s2++;
	}
	return (*un_s1 - *un_s2);
}
