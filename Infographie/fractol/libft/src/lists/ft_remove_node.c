/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:17:04 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/26 15:17:32 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Function that removes a node from a list without freeing it.
**	------------------------------------------------------------
*/

#include "libft.h"

void	ft_remove_node(t_list **list, t_list *node)
{
	t_list	*ptr;
	t_list	*save;

	if (*list == NULL || node == NULL)
		return ;
	if (node == *list)
		*list = NULL;
	save = node->next;
	ptr = *list;
	while (ptr->next != node)
		ptr = ptr->next;
	ptr->next = save;
}
