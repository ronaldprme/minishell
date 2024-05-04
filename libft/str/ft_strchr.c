/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:41 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;

	cc = (char) c;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char) cc)
			return (str);
		str++;
	}
	if (*str == cc)
		return (str);
	return (NULL);
}
/*
int main()
{
	char *ss = "teste";
	char *s = ft_strchr(ss, '\0');
	printf("|%s|(%p)\n", ss, ss);
	printf("|%s|(%p)\n", s, s);
}
*/