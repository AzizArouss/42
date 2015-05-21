/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:23:11 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/14 18:35:06 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*ptr;
	t_list		*ptr2;

	if (!alst || !del || !*alst)
		return ;
	ptr = *alst;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		(*del)(ptr->content, ptr->content_size);
		free(ptr);
		ptr = ptr2;
	}
	*alst = NULL;
}
