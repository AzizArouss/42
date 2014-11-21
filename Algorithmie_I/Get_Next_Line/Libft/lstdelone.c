/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 09:21:09 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/26 18:02:10 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t))
{
	if (!lst || !*lst)
		return ;
	if (del)
		del((*lst)->content, (*lst)->content_size);
	else
		free((*lst)->content);
	(*lst)->content = NULL;
	ft_memdel((void **)lst);
}
