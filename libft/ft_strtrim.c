/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 09:46:39 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 16:55:03 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;

	if(!s1 || !set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[start]))
		start++;
	while (ft_strrchr(set, (int)s1[end]))
		end--;
	trimmed_str = ft_substr(s1, (unsigned int)start, end - start + 1);
	return (trimmed_str);
}