/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 16:53:22 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/06 16:53:25 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstclean(t_list **list)
{
	t_list	*ptr;
	t_list	*ptr2;

	if ((ptr = *list) == NULL)
		return ;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
	*list = NULL;
}
