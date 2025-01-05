/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exportex1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:47:37 by alagmiri          #+#    #+#             */
/*   Updated: 2023/07/27 13:48:23 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	ft_add(char *cmd)
{
	char	*value;
	char	**tmp;

	tmp = ft_split(cmd, '=');
	if (!tmp)
		return ;
	value = ft_strchr(cmd, '=');
	value++;
	addenv(tmp[0], value);
	ft_free(tmp);
}
