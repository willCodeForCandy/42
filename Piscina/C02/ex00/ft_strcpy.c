/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@malaga.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:56:16 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/05 13:10:27 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strcpy()  function  copies the string pointed to by src, including 
the terminating null byte ('\0'), to the buffer  pointed  to  by  dest. */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
