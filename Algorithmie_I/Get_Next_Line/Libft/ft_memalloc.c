/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:32:30 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 12:32:51 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = NULL;
	if (size)
	{
		mem = (void *)malloc(size);
		if (mem)
		{
			ft_bzero(mem, size);
		}
	}
	return (mem);
}
