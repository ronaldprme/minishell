/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <mailto:rprocopi@student.42lis    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:05:12 by eduarodr          #+#    #+#             */
/*   Updated: 2023/12/01 18:33:13 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

char	*ft_putstr(char *str, char *color)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (color)
	{
		while (color[i])
		{
			write(1, &color[i], 1);
			i++;
		}
	}
	if (str)
	{
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
	}
	return (str);
}

t_parser	*parser(void)
{
	static t_parser	parser;

	return (&parser);
}

char	*get_path(char *command, char **env)
{
	int		i;
	char	**path;
	char	*str;
	char	*tmp;

	tmp = NULL;
	if (access(command, X_OK) == 0)
		return (ft_strdup(command));
	if (!path_helper(env, &i))
		return (0);
	path = ft_split(env[i] + 5, ':');
	i = 0;
	while (path[i])
	{
		str = triple_strjoin(path[i++], "/", command);
		if (!access(str, F_OK))
			break ;
		free(str);
		str = NULL;
	}
	if (str)
		tmp = ft_strdup(str);
	if (!free_path_helper(str, command, path))
		return (0);
	return (tmp);
}

int	path_helper(char **env, int *i)
{
	(*i) = -1;
	while (env[++(*i)])
	{
		if (!ft_strncmp(env[(*i)], "PATH=", 5) && ft_strlen(env[(*i)]) > 5)
			return (1);
	}
	if (!env[(*i)])
	{
		printf("path not found !\n");
		return (0);
	}
	return (1);
}

void	free_str_h(char *str, char *command)
{
	free(str);
	str = NULL;
	(void)command;
	ft_putstr_fd(" command not found\n", STDERR_FILENO);
	parser()->exit_status = 127;
}
