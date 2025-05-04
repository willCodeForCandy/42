/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:28:00 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 07:10:00 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (s[start] && len)
	{
		substr[start] = s[start];
		start++;
		len--;
	}
	substr[start] = '\0';
	return (substr);
}