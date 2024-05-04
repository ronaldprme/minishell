/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:49:47 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/22 15:55:55 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_len(int n)
{
	int	i;

	if (n == INT_MIN)
		return (11);
	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if ((unsigned int) n == 2147483648)
	{
		ft_putchar('2');
		n = 147483648;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_printnbr(int n)
{
	ft_putnbr(n);
	return (num_len(n));
}
