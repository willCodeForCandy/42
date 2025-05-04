/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 18:28:00 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 08:13:01 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(len + 1);
	if (!substr || start > (unsigned int)ft_strlen(s))
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
	if (len > (size_t)(ft_strlen(substr)+1))
		free(&substr[i+1]);
	return (substr);
}