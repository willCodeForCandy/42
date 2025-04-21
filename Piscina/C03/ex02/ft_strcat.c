/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:42:38 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/11 13:43:21 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strcat() function appends the src string to the dest string, overwriting 
the terminating null byte ('\0') at the end of dest, and then adds a 
terminating null byte. The strings may not overlap, and the dest string must 
have enough space for the result. If dest is not large enough, program behavior 
is unpredictable;*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
