/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:14:00 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:16 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	l = (t_list *)(malloc(sizeof(t_list)));
	if (!l)
		return (NULL);
	if (content)
	{
		l->content = malloc(content_size);
		if (!l->content)
			return (NULL);
		l->content_size = content_size;
		ft_memcpy(l->content, content, content_size);
	}
	else
	{
		l->content = NULL;
		l->content_size = 0;
	}
	l->next = NULL;
	return (l);
}
