/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 00:30:39 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/28 10:31:58 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstchr(t_list **list, char c)
{
	t_list	*ptr;

	if ((ptr = *list) == NULL)
		return (NULL);
	while (ptr)
	{
		if (ft_strchr((char *)ptr->content, c) != NULL)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
