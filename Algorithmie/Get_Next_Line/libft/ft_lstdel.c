/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 07:24:04 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 13:03:55 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_lst;
	t_list	*temp;

	if (alst != NULL)
	{
		next_lst = *alst;
		while (next_lst != NULL)
		{
			if (del != NULL)
				(*del)(next_lst->content, (*next_lst).content_size);
			temp = next_lst->next;
			free(next_lst);
			next_lst = temp;
		}
		*alst = NULL;
	}
}
