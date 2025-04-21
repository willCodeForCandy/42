/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virrasch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:10:14 by virrasch          #+#    #+#             */
/*   Updated: 2025/02/16 19:21:26 by virrasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
#define RUSH02_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_printstr(char *str);
char	*ft_strstr(char *str, char *to_find);
void	interpreter(char *str);
void	interpreter2(char *dict, char *str);
int		is_number(char *input);
void	write_number(char *number);

#endif
