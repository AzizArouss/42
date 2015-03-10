/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/10 08:01:22 by aarouss           #+#    #+#             */
/*   Updated: 2015/03/10 08:01:42 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_get1(int ret, char *buf, char **tmp)
{
	char	*tmp2;

	buf[ret] = '\0';
	tmp2 = *tmp;
	*tmp = ft_strjoin(tmp2, buf);
	ft_strdel(&tmp2);
}

void	ft_get2(char **line, char **tmp)
{
	char	*tmp2;
	size_t	len;

	len = ft_strchr(*tmp, '\n') - *tmp;
	*line = ft_strsub(*tmp, 0, len);
	tmp2 = *tmp;
	*tmp = ft_strdup(ft_strchr(*tmp, '\n') + 1);
	ft_strdel(&tmp2);
}

int		get_next_line(int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;
	static char		*tmp;

	if (!tmp)
		tmp = ft_strnew(0);
	ret = 0;
	while ((ft_strchr(tmp, '\n')) == NULL
		&& (ret = read(fd, buff, BUFF_SIZE)) > 0)
		ft_get1(ret, buff, &tmp);
	if (ret == -1)
		return (-1);
	if (ret == 0 && ft_strchr(tmp, '\n') == NULL)
	{
		*line = tmp;
		tmp = NULL;
		return (0);
	}
	ft_get2(line, &tmp);
	return (1);
}
