/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:34:13 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 18:35:02 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*trimmed;
	char	**arr;
	size_t	i;
	size_t	count;

	trimmed = ft_strtrim(s, (const char *)&c);
	arr = malloc((sizeof(char *) * ft_strlen(trimmed)) + 1);
	i = 1;
	count = 0;
	arr[count] = trimmed[0];
	while (trimmed[i])
	{
		if (trimmed[i] == c)
			{
				if (trimmed[i - 1] != c)
				{
					trimmed[i] = '\0';
					count++;
				}
			}
		else
		{
			if (trimmed[i - 1] == c || trimmed[i - 1] == '\0')
				arr[count] = &trimmed[i];
		}
		i++;
	}
	trimmed[i] == '\0';
	return (arr);
}