/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:55:27 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/10 16:34:23 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_word(char c)
{
	if ((c >= '0' && c <= '9') || is_lowercase(c) || is_uppercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (is_lowercase(str[0]))
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!is_word(str[i - 1]))
		{
			if (is_lowercase(str[i]))
				str[i] = str[i] - 32;
		}
		else
		{
			if (is_uppercase(str[i]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
