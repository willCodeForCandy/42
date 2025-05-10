/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:13:57 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/10 16:33:03 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_numlen(int n)
{
	unsigned int	len;
	long			nb;

	len = 1;
	nb = n;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*alpha;
	unsigned int	len;
	long			nb;

	len = ft_numlen(n);
	alpha = malloc(len + 1);
	if (!alpha)
		return (NULL);
	alpha[len] = '\0';
	len--;
	nb = n;
	if (nb < 0)
	{
		alpha[0] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		alpha[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	alpha[len] = nb + '0';
	return (alpha);
}
