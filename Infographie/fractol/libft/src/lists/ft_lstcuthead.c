/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcuthead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 00:32:09 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/28 10:31:41 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstcuthead(t_list **head, t_list *new_head)
{
	t_list	*ptr;
	t_list	*tmp;

	if ((ptr = *head) == NULL)
		return ;
	while (ptr != new_head)
	{
		tmp = ptr->next;
		free(ptr->content);
		free(ptr);
		ptr = tmp;
		if (ptr == NULL)
		{
			*head = NULL;
			return ;
		}
	}
	*head = ptr->next;
	free(ptr->content);
	free(ptr);
}
