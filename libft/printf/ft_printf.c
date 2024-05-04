/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:12:24 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/05/25 13:45:03 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
			i += execute_flag(*(++format), args);
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
