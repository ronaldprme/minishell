/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:33:02 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			c;
	char			*r;
	unsigned int	l;

	l = ft_strlen(s);
	c = 0;
	if (start > l)
		r = malloc(1);
	else if (l - start < len)
		r = malloc((l - start + 1) * sizeof(char));
	else
		r = malloc((len + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	if (start > l)
		r[0] = '\0';
	if (start > l)
		return (r);
	while (s[c + start] && c < len)
	{
		r[c] = s[start + c];
		c++;
	}
	r[c] = '\0';
	return (r);
}
/*int main()
{
	char * s = ft_substr("tripouille", 1,1);
	printf("%s|\"r\"\n", s);
	s = ft_substr("tripouille", 100, 1);
	printf("%s|\"\"\n", s);
	s = ft_substr("1", 42, 42000000);
	printf("%s|\"\"\n", s);
	s = ft_substr("0123456789", 9, 10);
	printf("%s|\"9\"\n", s);
	s = ft_substr("42", 0, 0);
	printf("%s|\"\"\n", s);
	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	printf("%s|\"LES HARICOTS !\"\n", s);
}*/