/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:13:57 by virrasch          #+#    #+#             */
/*   Updated: 2025/05/10 15:04:42 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_numlen(int n)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*alpha;
	unsigned int	len;

	len = ft_numlen(n);
	alpha = malloc(len + 1);
	if (!alpha)
		return (NULL);
	if (n == -2147483648)
	{
		alpha = "-2147483648";
		return alpha;
	}
	alpha[len] = '\0';
	len--;
	if (n < 0)
	{
		alpha[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		alpha[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	alpha[len] = n + '0';
	return (alpha);
}
