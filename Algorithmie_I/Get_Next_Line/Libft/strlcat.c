/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:57:28 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/26 17:21:54 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	buff;
	size_t	len2;
	size_t	n_ori;

	n_ori = n;
	len2 = ft_strlen(src);
	buff = ft_strlen(dest) + len2;
	while (*dest && n)
	{
		n--;
		dest++;
	}
	if (n == 0)
		return (n_ori + len2);
	i = 0;
	while (src[i] && n-- > 1)
		*dest++ = src[i++];
	*dest = 0;
	return (buff);
}
