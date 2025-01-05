/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:06:11 by alagmiri          #+#    #+#             */
/*   Updated: 2023/06/25 16:23:07 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbword(char const *s, char c)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			k++;
		i++;
	}
	return (k);
}

static char	**result(char const *s, char c, char **k, int i)
{
	int	j;
	int	l;
	int	d;

	l = 0;
	d = nbword(s, c);
	while (s[i] && l < d)
	{
		while (s[i] == c)
			i++;
	j = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			j++;
		}
		k[l++] = ft_substr(s, i - j, j);
		if (!k)
		{	
			ft_free(k);
			return (NULL);
		}
	}
	k[l] = 0;
	return (k);
}

char	**ft_split(char	const *s, char c)
{
	char	**k;

	if (!s)
		return (NULL);
	k = (char **) malloc((1 + nbword(s, c)) * sizeof(char *));
	if (!k)
		return (0);
	return (result(s, c, k, 0));
}
