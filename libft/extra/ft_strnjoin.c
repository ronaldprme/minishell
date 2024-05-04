/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:25:01 by tiagoliv          #+#    #+#             */
/*   Updated: 2024/02/27 17:00:04 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	**get_args(size_t count, va_list *args, size_t *len);

static char	**get_args(size_t count, va_list *args, size_t *len)
{
	char	**ss;
	size_t	i;

	ss = malloc(sizeof(char *) * (count + 1));
	if (!ss)
		return (NULL);
	ss[count] = NULL;
	*len = 0;
	i = 0;
	while (i < count)
	{
		ss[i] = va_arg(*args, char *);
		*len += ft_strlen(ss[i]);
		i++;
	}
	return (ss);
}

char	*ft_strnjoin(size_t count, ...)
{
	va_list	args;
	char	**ss;
	char	*result;
	size_t	len;
	size_t	i;

	va_start(args, count);
	ss = get_args(count, &args, &len);
	va_end(args);
	if (!ss)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (free(ss), NULL);
	result[0] = '\0';
	i = 0;
	while (i < count)
		ft_strlcat(result, ss[i++], len + 1);
	free(ss);
	return (result);
}
