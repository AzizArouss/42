/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:19:14 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/24 16:15:41 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/includes/libft.h"
#include <unistd.h>

static char		*ft_charcat(char *s1, const char s2)
{
	char	*s1o;
	char	*cpy;

	cpy = ft_strnew(ft_strlen(s1) + 2);
	cpy = ft_strcpy(cpy, s1);
	s1o = cpy;
	if (!s2)
		return (cpy);
	while (*cpy)
		cpy++;
	*cpy++ = s2;
	*cpy = '\0';
	free(s1);
	return (s1o);
}

static int		empty_buffer(char *buff, char **line, int i, int first)
{
	while (buff[++i])
	{
		if (buff[i] == -115)
			continue ;
		if (buff[i] == '\n' && first == 0)
		{
			*line[0] = 0;
			buff[i] = -115;
			return (1);
		}
		else if (buff[i] != '\n')
		{
			*line = ft_charcat(*line, buff[i]);
			buff[i] = -115;
			first = 1;
		}
		else if (buff[i] == '\n' && first == 1)
		{
			buff[i] = -115;
			return (1);
		}
	}
	if (first == 1)
		return (2);
	return (0);
}

static void		end_line(int first_passage, char *buff, char **line, int i)
{
	if (first_passage == 1 && (buff[0] == '\n' || buff[0] == '\0'))
		*line[0] = 0;
	while (buff[++i])
	{
		if (first_passage == -1)
			buff[i] = -115;
		else if (buff[i] != '\n')
		{
			if (first_passage == 1)
			{
				*line[0] = buff[i];
				first_passage = 0;
			}
			else
				*line = ft_charcat(*line, buff[i]);
			buff[i] = -115;
		}
		else
		{
			buff[i] = -115;
			break ;
		}
	}
}

static int		check_cond(char *buff, int *first_go, char **line, int count)
{
	char	*cpy_buff;
	char	*cpy;

	if ((ft_strchr(buff, (int)'\n')) == NULL && *first_go)
	{
		*line = ft_strncpy(*line, buff, count);
		first_go = 0;
	}
	else if ((ft_strchr(buff, (int)'\n')) == NULL)
	{
		cpy_buff = (char *)ft_memalloc(sizeof(cpy_buff) * (count + 1));
		cpy_buff = ft_strncpy(cpy_buff, buff, count);
		cpy = ft_strjoin(*line, cpy_buff);
		free(*line);
		free(cpy_buff);
		*line = cpy;
	}
	else if ((ft_strchr(buff, (int)'\n')) != NULL)
	{
		end_line(*first_go, buff, line, (-1));
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	buff[BUFF_SIZE + 1];
	int			first_passage;
	int			nb;
	int			count;

	if (BUFF_SIZE <= 0 || !line || (fd < 2 && fd != 0))
		return (-1);
	*line = (char *)ft_memalloc(sizeof(*line) * (BUFF_SIZE + 1));
	first_passage = 1;
	if ((nb = empty_buffer(buff, line, (-1), 0)) == 1)
		return (1);
	else
		first_passage = 0;
	while ((count = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (check_cond(buff, &first_passage, line, count) == 1)
			return (1);
		end_line ((-1), buff, line, (-1));
	}
	if (count == -1)
		return (-1);
	if (nb == 2 || **line)
		return (1);
	return (0);
}
