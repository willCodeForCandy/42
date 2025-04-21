/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:21:51 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/04 16:25:04 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	while (i != size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = buffer;
		i++;
	}
}
