/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:23:35 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/28 00:32:55 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;
	void	*ptr_cont;

	ptr_cont = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->content_size = 0;
	if (content != NULL)
	{
		node->content_size = content_size;
		ptr_cont = malloc(content_size);
		ft_bzero(ptr_cont, content_size);
		ptr_cont = ft_memcpy(ptr_cont, content, content_size);
	}
	node->content = ptr_cont;
	return (node);
}
