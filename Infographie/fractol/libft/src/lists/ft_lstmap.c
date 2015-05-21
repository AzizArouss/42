/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:47:30 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/14 19:50:10 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_pushback(t_list **begin, t_list *node)
{
	t_list		*ptr;

	ptr = *begin;
	if (!node)
		return ;
	if (!*begin)
	{
		*begin = node;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*ptr;
	t_list		*list_ret;

	if (!lst || !f)
		return (NULL);
	ptr = lst;
	list_ret = NULL;
	while (ptr->next != NULL)
	{
		ft_pushback(&list_ret, (*f)(ptr));
		ptr = ptr->next;
	}
	ft_pushback(&list_ret, (*f)(ptr));
	return (list_ret);
}
