/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 10:05:35 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/26 11:37:26 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	if (!lst || !*lst)
		return ;
	if ((*lst)->next)
		ft_lstdel(&(*lst)->next, del);
	ft_lstdelone(lst, del);
}
