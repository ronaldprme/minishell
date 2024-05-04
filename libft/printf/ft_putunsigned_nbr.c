/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:40:07 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/05/25 13:58:34 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned	int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	ft_putunsigned_nbr(unsigned int n)
{
	int	i;

	i = ft_num_len(n);
	if (n >= 10)
		ft_putunsigned_nbr(n / 10);
	ft_putchar(n % 10 + '0');
	return (i);
}
