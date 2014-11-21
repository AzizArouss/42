/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:44:17 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/26 15:34:57 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*cpy;

	new = (t_list *) ft_memalloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		cpy = ft_memalloc(content_size);
		if (!cpy)
			return (NULL);
		new->content = ft_memcpy(cpy, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
