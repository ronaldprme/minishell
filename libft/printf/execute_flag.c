/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:49:35 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/05/25 13:45:28 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	execute_flag(int s, va_list args)
{
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'p')
		return (ft_printptr(va_arg(args, unsigned long long)));
	else if (s == 'l')
		return (ft_printulong(va_arg(args, unsigned long)));
	else if (s == 'd' || s == 'i')
		return (ft_printnbr(va_arg(args, int)));
	else if (s == 'u')
		return (ft_putunsigned_nbr(va_arg(args, unsigned int)));
	else if (s == 'x' || s == 'X')
		return (ft_printhexa(va_arg(args, unsigned int), s));
	else if (s == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(s));
}
