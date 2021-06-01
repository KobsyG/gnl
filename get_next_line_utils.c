/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:41:43 by gbeco             #+#    #+#             */
/*   Updated: 2021/06/01 16:02:54 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../libft/libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s && s[i])
// 		i++;
// 	return (i);
// }

int	isline(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*gnl_strjoin(char *tmp, char *buf, int oct)
{
	char	*new;
	int		i;
	int		j;

	if (ft_salloc(&new, sizeof(char) * (ft_strlen(tmp) + oct + 1)))
		return (NULL);
	i = 0;
	while (tmp && tmp[i])
	{
		new[i] = tmp[i];
		i++;
	}
	j = 0;
	while (oct-- > 0)
	{
		new[i + j] = buf[j];
		j++;
	}
	new[i + j] = 0;
	if (tmp)
	{
		free(tmp);
		tmp = NULL;
	}
	return (new);
}

char	*ft_strcdup(char *tmp)
{
	int		i;
	char	*newline;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (ft_salloc(&newline, sizeof(char) * (i + 1)))
		return (NULL);
	newline[i] = 0;
	while (i-- > 0)
	{
		newline[i] = tmp[i];
	}
	return (newline);
}

char	*gnl_substr(char *tmp)
{
	char	*newtmp;
	int		i;
	int		j;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (ft_salloc(&newtmp, sizeof(char) * (ft_strlen(tmp) - i)))
		return (NULL);
	i++;
	j = 0;
	while (tmp[i + j])
	{
		newtmp[j] = tmp[i + j];
		j++;
	}
	newtmp[j] = 0;
	if (tmp)
	{
		free(tmp);
		tmp = NULL;
	}
	return (newtmp);
}
