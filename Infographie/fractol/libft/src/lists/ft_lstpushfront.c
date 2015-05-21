/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:17:58 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/26 15:18:24 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushfront(t_list **head, void *data, size_t size)
{
	t_list	*node;

	if (head == NULL || data == NULL || size == 0
		|| (node = ft_lstnew(data, size)) == NULL)
		return ;
	node->next = *head;
	*head = node;
}
