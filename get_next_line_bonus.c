/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:41:43 by gbeco             #+#    #+#             */
/*   Updated: 2021/02/21 14:26:17 by gbeco            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	get_next_line(int fd, char **line)
{
	int			oct;
	static char	*tmp[1024];
	char		buf[BUFFER_SIZE + 1];

	if (BUFFER_SIZE < 1)
		return (-1);
	if (fd <= -1 || !line)
		return (-1);
	oct = 1;
	while (oct != 0 && isline(tmp[fd]) == 0)
	{
		oct = read(fd, buf, BUFFER_SIZE);
		if (oct == -1)
			return (-1);
		tmp[fd] = ft_strjoin(tmp[fd], buf, oct);
	}
	*line = ft_strcdup(tmp[fd]);
	if (oct == 0)
	{
		free(tmp[fd]);
		tmp[fd] = NULL;
		return (0);
	}
	tmp[fd] = ft_substr(tmp[fd]);
	return (1);
}
