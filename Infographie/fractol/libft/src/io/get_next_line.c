/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 13:09:57 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/20 08:52:22 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char	*extract_line_from_lst(t_list **list, t_list *nl_ptr)
{
	t_list	*ptr;
	size_t	size;
	char	*line;

	size = 0;
	if ((ptr = *list) == NULL)
		return (NULL);
	while (ptr != NULL && (size += ptr->content_size - 1) && ptr != nl_ptr)
		ptr = ptr->next;
	if ((line = ft_strnew(size)) == NULL)
		return (NULL);
	ptr = *list;
	while (ptr != nl_ptr)
	{
		line = ft_strcat(line, ptr->content);
		ptr = ptr->next;
	}
	if (ptr != NULL)
		line = ft_strcat(line, ptr->content);
	return (line);
}

int		get_next_line(int const fd, char **line)
{
	ssize_t			nb;
	static t_list	*list[256] = {0};
	t_list			*nl_ptr;
	char			*buf;
	char			*cut;

	nb = 0;
	if (line == NULL || ((buf = ft_strnew(BUF_SIZE)) == NULL))
		return (-1);
	while ((nl_ptr = ft_lstchr(&list[fd], '\n')) == NULL
		&& (nb = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[nb] = '\0';
		ft_lstpushback(&list[fd], (void *)buf, ft_strlen(buf) + 1);
	}
	*line = extract_line_from_lst(&list[fd], nl_ptr);
	ft_lstcuthead(&list[fd], nl_ptr);
	if ((cut = ft_strchr(*line, '\n')) != NULL)
	{
		*cut++ = '\0';
		*cut ? ft_lstpushfront(&list[fd], (void *)cut, ft_strlen(cut) + 1) : 0;
	}
	free(buf);
	return ((*line != NULL) ? 1 : nb);
}
