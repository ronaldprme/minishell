/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:15 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/05/18 12:57:15 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;
	t_list	*aux;

	if (!del || !lst)
		return ;
	n = *lst;
	while (n)
	{
		aux = n->next;
		ft_lstdelone(n, del);
		n = aux;
	}
	*lst = NULL;
}
