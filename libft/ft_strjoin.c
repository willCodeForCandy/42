/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 09:04:48 by virginia          #+#    #+#             */
/*   Updated: 2025/05/04 09:30:39 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	final_size;

	if (!s1 || !s2)
		return (NULL);
	final_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(final_size);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcat(s3, s2, final_size);
	return (s3);
}