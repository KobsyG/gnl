/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:41:41 by gbeco             #+#    #+#             */
/*   Updated: 2021/06/01 13:50:58 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define BUFFER_SIZE 2

int		get_next_line(int fd, char **line);
int		ft_strlen(const char *s);
int		isline(char *s);
char	*gnl_strjoin(char *tmp, char *buf, int oct);
char	*ft_strcdup(char *tmp);
char	*gnl_substr(char *tmp);

#endif
