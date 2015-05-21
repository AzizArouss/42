/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:29:21 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/15 15:29:23 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr || !f)
		return ;
	while (ptr->next != NULL)
	{
		(*f)(ptr);
		ptr = ptr->next;
	}
	(*f)(ptr);
}
