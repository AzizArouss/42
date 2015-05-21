/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 15:16:43 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/26 15:16:54 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **head, void *data, size_t size)
{
	t_list	*node;
	t_list	*ptr;

	if (head == NULL || data == NULL || size == 0
		|| (node = ft_lstnew(data, size)) == NULL)
		return ;
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
}
