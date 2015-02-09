/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:25:16 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:25:18 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * size);
	if (tmp != NULL)
	{
		ft_bzero(tmp, size);
		return ((void*)tmp);
	}
	return (NULL);
}
