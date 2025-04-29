/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <virrasch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:51:45 by virrasch          #+#    #+#             */
/*   Updated: 2025/04/22 15:04:22 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐
//lent, if a lowercase representation exists in the current locale.  Oth‐
//erwise, it returns c.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
