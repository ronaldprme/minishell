/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:50:48 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/22 20:46:25 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (*str)
	{
		ft_putchar(*str++);
		i++;
	}
	return (i);
}
