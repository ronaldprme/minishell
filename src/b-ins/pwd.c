/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:38:29 by rprocopi          #+#    #+#             */
/*   Updated: 2024/02/26 19:38:29 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bi_pwd(void)
{
	char	dir[PATH_MAX + 1];

	if (!getcwd(dir, PATH_MAX))
		free_shell(FAILURE_GETTING_PATH, EXIT_FAILURE, NULL, NULL);
	printf("%s\n", dir);
	mini()->command_ret = 0;
}

void	export_add(t_list **env_list, char *av)
{
	t_list	*exp;

	exp = ft_lstnew(ft_strdup((char *)av));
	ft_lstadd_back(env_list, exp);
}
