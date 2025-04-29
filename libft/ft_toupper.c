/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:59:40 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/22 15:04:27 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is a lowercase letter, toupper() returns its uppercase equivalent,
//if an uppercase representation exists in the  current  locale.   Other‐
//wise,  it  returns c.

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
