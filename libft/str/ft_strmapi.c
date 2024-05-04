/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:56 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		c;

	if (!s)
		return (NULL);
	r = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	c = 0;
	while (s[c])
	{
		r[c] = (*f)(c, s[c]);
		c++;
	}
	r[c] = '\0';
	return (r);
}
