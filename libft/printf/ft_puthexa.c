/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:50:26 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/22 16:40:47 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_puthexa(unsigned int n, const char x)
{
	if (n >= 16)
	{
		ft_puthexa(n / 16, x);
		ft_puthexa(n % 16, x);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar(n + '0');
		}
		else
		{
			if (x == 'x')
				ft_putchar(n - 10 + 'a');
			if (x == 'X')
				ft_putchar(n - 10 + 'A');
		}
	}
}

int	ft_printhexa(unsigned int n, const char x)
{
	ft_puthexa(n, x);
	return (ft_hex_len(n));
}
