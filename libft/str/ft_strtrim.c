/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:33:01 by tiagoliv          #+#    #+#             */
/*   Updated: 2024/03/09 14:46:28 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		st;
	int		en;
	char	*r;

	if (!s1)
		return (NULL);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	if (st == (int) ft_strlen(s1))
		en = st;
	else
	{
		en = ft_strlen(s1) - 1;
		while (en > st && s1[en] && ft_strchr(set, s1[en]))
			en--;
	}
	r = (char *)malloc(sizeof(char) * (en - st + 1) + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + st, en - st + 1 + 1);
	return (r);
}
