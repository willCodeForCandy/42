/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:34:13 by virginia          #+#    #+#             */
/*   Updated: 2025/05/10 12:53:07 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	if (*s != c)
		count = 1;
	else
		count = 0;
	s++;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	int		count;
	char	*temp;

	if (!(*s) || !c)
		return (s);
	count = count_words(s, c);
	arr = ft_calloc((size_t)count, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	temp = (char *)s;
	while (ft_strchr(temp, c))
	{
		arr[i] = ft_substr(s, temp, (ft_strchr(temp, c) - temp));
		i++;
		temp = ft_strchr(temp,c) + 1;
	}
	// i = 1;
	// count = 0;
	// arr[count] = trimmed[0];
	// while (trimmed[i])
	// {
	// 	if (trimmed[i] == c)
	// 		{
	// 			if (trimmed[i - 1] != c)
	// 			{
	// 				trimmed[i] = '\0';
	// 				count++;
	// 			}
	// 		}
	// 	else
	// 	{
	// 		if (trimmed[i - 1] == c || trimmed[i - 1] == '\0')
	// 			arr[count] = &trimmed[i];
	// 	}
	// 	i++;
	// }
	// trimmed[i] == '\0';
	return (arr);
}