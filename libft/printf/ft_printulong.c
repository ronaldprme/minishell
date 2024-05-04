/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printulong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:07:51 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/10/25 17:17:17 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printulong(unsigned long num)
{
	char	buffer[21];
	char	reversed_buffer[21];
	int		i;
	int		j;

	i = 0;
	if (num == 0)
		buffer[i++] = '0';
	else
	{
		while (num > 0)
		{
			buffer[i++] = '0' + (num % 10);
			num /= 10;
		}
	}
	j = 0;
	while (i > 0)
		reversed_buffer[j++] = buffer[--i];
	i = 0;
	while (i < j)
		write(1, &reversed_buffer[i++], 1);
	return (j);
}
