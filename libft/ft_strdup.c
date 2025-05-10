/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:19:31 by virginia          #+#    #+#             */
/*   Updated: 2025/05/10 17:51:09 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  strdup() function returns a pointer to a new string which is a du‐
//plicate of the string s.  Memory for the new string  is  obtained  with
//malloc(3), and can be freed with free(3).
//On success, the strdup() function returns a pointer to  the  duplicated
//string.  It returns NULL if insufficient memory was available, with er‐
//rno set to indicate the error.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	s_len;

	s_len = ft_strlen(s);
	copy = (char *)malloc(s_len + 1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, s_len + 1);
	return (copy);
}
