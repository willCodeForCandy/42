/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:28:00 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 09:02:12 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = malloc(1);
		*substr = '\0';
		return (substr);
	}
	if (len < (ft_strlen(s) - start))
		substr = malloc(len + 1);
	else
		substr = malloc((ft_strlen(s) - start) + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start] && len)
	{
		substr[i] = s[start];
		start++;
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
