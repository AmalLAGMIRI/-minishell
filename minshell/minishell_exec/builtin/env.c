/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:00:00 by alagmiri          #+#    #+#             */
/*   Updated: 2023/07/18 09:09:37 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	ft_env(t_args *cmd)
{
	t_env	*env;

	env = g_minishell.env;
	while (env)
	{
		if (env->value != NULL)
		{
			ft_putstr_fd(env->key, cmd->outfile);
			ft_putstr_fd("=", cmd->outfile);
			ft_putendl_fd(env->value, cmd->outfile);
		}
		env = env->next;
	}
}
