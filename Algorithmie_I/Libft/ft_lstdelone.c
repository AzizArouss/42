/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 07:23:20 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/17 08:15:40 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t))
{
	if (!lst || !*lst)
		return ;
	if (del)
		del((*lst)->content, (*lst)->content_size);
	else
		free((*lst)->content);
	(*lst)->content = NULL;
	ft_memdel((void **)lst);
}
