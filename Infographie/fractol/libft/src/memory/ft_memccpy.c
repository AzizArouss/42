/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:42:43 by cfernand          #+#    #+#             */
/*   Updated: 2015/03/22 17:40:22 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dptr;
	char		*sptr;

	dptr = (char *)dst;
	sptr = (char *)src;
	i = 0;
	while (i < n)
	{
		*dptr = *sptr;
		if (*dptr == c)
			return ((void *)(dptr + 1));
		dptr++;
		sptr++;
		i++;
	}
	return (NULL);
}
