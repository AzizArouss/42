/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:46:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:13 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *new_elem;
	t_list *prev_elem;

	new_lst = NULL;
	if (lst && (*f))
	{
		new_lst = (*f)(lst);
		prev_elem = new_lst;
		lst = lst->next;
		while (lst)
		{
			new_elem = (*f)(lst);
			prev_elem->next = new_elem;
			prev_elem = new_elem;
			lst = lst->next;
		}
		prev_elem->next = NULL;
	}
	return (new_lst);
}
