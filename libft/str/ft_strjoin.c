/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:50 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/07/28 15:53:43 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1l;
	int		s2l;
	char	*d;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	d = malloc(s1l + s2l + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, s1l + 1);
	ft_strlcat(d, s2, s1l + s2l + 1);
	return (d);
}

/*int main()
{
	char *s = ft_strjoin("d", "ee");
	printf("|%s|dee|\n", s);
	s = ft_strjoin("abc", "");
	printf("|%s|abc|\n", s);
	s = ft_strjoin("", "abc");
	printf("|%s|abc|\n", s);
	s = ft_strjoin("abcd", "efghi");
	printf("|%s|abcdefghi|\n", s);
}*/
