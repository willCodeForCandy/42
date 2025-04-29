/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:44:25 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/29 18:23:04 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	int		pos;
	char	*ptr;

	pos = 0;
	ptr = (char *)s; // aca convertimos el puntero s a un puntero char, porque no se puede hacer aritmética de punteros ni acceder a valores con un void *
	while (n)
	{
		ptr[pos] = 0;
		pos++;
		n--;
	}
}