/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcountbytes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:58:02 by aarouss           #+#    #+#             */
/*   Updated: 2014/11/26 11:58:05 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstcountbytes(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i += (int)(lst->content_size);
		lst = lst->next;
	}
	return (i);
}
