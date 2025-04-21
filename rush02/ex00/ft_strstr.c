/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:58:36 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/16 19:00:03 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == '\0')
		return (str);
	while (*str)
	{
		if (*str == *b)
		{
			a = str;
			while ((*a) && (*b) && (*a == *b))
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (str);
			b = to_find;
		}
		str++;
	}
	return (0);
}
