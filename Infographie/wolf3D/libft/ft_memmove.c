/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:15:10 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:23 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*copy;
	size_t	i;

	i = 0;
	copy = malloc(len);
	if (copy)
	{
		copy = ft_memcpy(copy, src, len);
		while (i < len)
		{
			((char *)dst)[i] = ((char *)copy)[i];
			i++;
		}
	}
	return (dst);
}
