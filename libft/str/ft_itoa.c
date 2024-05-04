/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:23 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	numlen(int n)
{
	int		l;
	long	d;

	d = n;
	l = 0;
	if (n == 0)
		return (1);
	if (d < 0)
	{
		d *= -1;
		l++;
	}
	while (d > 0)
	{
		l++;
		d /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		l;

	l = numlen(n);
	s = malloc(l + 1);
	if (!s)
		return (NULL);
	if (n == 0)
		ft_strcpy(s, "0");
	else if (n == -2147483648)
		ft_strcpy(s, "-2147483648");
	if (n == 0 || n == -2147483648)
		return (s);
	s[l--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[l--] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
