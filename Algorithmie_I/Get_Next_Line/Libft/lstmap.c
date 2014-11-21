/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:22:32 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 17:12:27 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_item;
	t_list	*origin_list;
	t_list	*previous;

	if (!lst || !f)
		return (NULL);
	new_item = (*f)(lst);
	previous = new_item;
	origin_list = new_item;
	lst = lst->next;
	while (lst)
	{
		new_item = f(lst);
		if (new_item == NULL)
			return (NULL);
		previous->next = new_item;
		previous = new_item;
		lst = lst->next;
	}
	new_item->next = NULL;
	return (origin_list);
}
