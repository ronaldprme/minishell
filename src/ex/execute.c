/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:29:23 by rprocopi          #+#    #+#             */
/*   Updated: 2024/04/07 16:32:45 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

bool	execution(t_command *cmd)
{
	char	**env;

	env = get_env_from_ll(mini()->env_list);
	if (execve(cmd->cmd_name, cmd->args, env) < 0)
	{
		error_msg_ret(CANNOT_EXECUTE_FILE, cmd->cmd_name, CMD_NOT_FOUND_RET);
		free(env);
		return (false);
	}
	free(env);
	return (true);
}

void	set_execution(t_mini *mini, t_command *cmd, int has_next)
{
	if (if_builtin(cmd->cmd_name))
		execute_in_parent(mini, cmd, has_next);
	else
		execute_in_child(cmd, has_next);
	if (cmd->fds[1] != -1)
	{
		close(cmd->fds[1]);
		cmd->fds[1] = -1;
	}
}
