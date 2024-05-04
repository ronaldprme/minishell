/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:58 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	d;

	if (little[0] == '\0' || ft_strlen(little) == 0)
		return ((char *)big);
	c = 0;
	while (big[c] && c < len)
	{
		d = 0;
		while (little[d])
		{
			if (big[c + d] == little[d] && (c + d) < len)
				d++;
			else
				break ;
		}
		if (little[d] == '\0')
			return ((char *) &big[c]);
		c++;
	}
	return (NULL);
}
