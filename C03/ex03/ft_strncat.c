/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:57:50 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/11 13:58:15 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function appends at most ssize non-null bytes from the array
// pointed to by src, followed by a null character, to the end of the
// string pointed to by dst.  dst must point to a string contained in
// a buffer that is large enough, that is, the buffer size must be at
// least strlen(dst) + strnlen(src, ssize) + 1.

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
