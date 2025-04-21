/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:35:19 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/17 12:39:59 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c == 32 || (c >= 9 && c <= 13)));
}

void	parsenum(int *i, int *numlen, int *minus, char *str)
{
	*i = 0;
	*minus = 0;
	*numlen = 0;
	while (ft_isspace(str[*i]))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			(*minus)++;
		(*i)++;
	}
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		(*numlen)++;
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	numlen;
	int	result;
	int	mult;

	result = 0;
	mult = 1;
	parsenum(&i, &numlen, &minus, str);
	while (numlen)
	{
		result += (str[i - 1] - '0') * mult;
		mult *= 10;
		numlen--;
		i--;
	}
	if (minus % 2 == 1)
		result *= -1;
	return (result);
}
