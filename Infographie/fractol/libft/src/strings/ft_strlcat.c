/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:56:17 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/19 16:07:40 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst2;
	char		*src2;
	size_t		n;
	size_t		length;

	dst2 = dst;
	src2 = (char *)src;
	n = size;
	while (*dst2 != '\0' && n-- != 0)
		dst2++;
	length = dst2 - dst;
	n = size - length;
	if (!n)
		return (length + ft_strlen(src2));
	while (*src2)
	{
		if (n > 1)
		{
			*dst2++ = *src2;
			n--;
		}
		src2++;
	}
	*dst2 = '\0';
	return (length + (src2 - (char *)src));
}
