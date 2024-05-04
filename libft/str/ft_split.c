/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:40 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/11/23 18:01:49 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//#define malloc(x) printf("malloc(%ld)\n", x); malloc(x);

int	counttabs(const char *s, char c)
{
	int	i;
	int	tabs;
	int	isword;

	i = 0;
	tabs = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] == c)
			isword = 0;
		else
		{
			if (!isword)
				tabs++;
			isword = 1;
		}
		i++;
	}
	return (tabs);
}

/* start must be a valid char which means s[start] != c */
char	*nextsubstr(const char *s, char c, int start)
{
	int		d;
	char	*ss;

	d = start;
	while (s[d] && s[d] != c)
		d++;
	ss = ft_substr(s, start, d - start);
	return (ss);
}

void	*free_return(char **ss)
{
	int	i;

	i = 0;
	while (ss[i] != NULL)
		free(ss[i++]);
	free(ss);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		ntabs;
	int		j;
	char	**r;
	char	*ls;
	int		l;

	ntabs = counttabs(s, c);
	r = malloc((ntabs + 1) * sizeof(char *));
	if (r == NULL)
		return (NULL);
	j = 0;
	l = 0;
	while (j < ntabs)
	{
		while (s[l] && s[l] == c)
			l++;
		ls = nextsubstr(s, c, l);
		if (!ls)
			return (free_return(r));
		l += ft_strlen(ls) + 1;
		r[j] = ls;
		j++;
	}
	r[j] = NULL;
	return (r);
}

/*int main()
{
	char **r = ft_split("hello!", ' ');
	printf("|%s|\n", r[0]);
	printf("|%s|\n", r[1]);
	free_return(r, 2);
}*/
