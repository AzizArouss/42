/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:18:33 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:48 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		dst_len;
	char		*copy_dst;
	char		*copy_src;

	copy_dst = dst;
	copy_src = (char *)src;
	len = size;
	while (*copy_dst && len--)
		copy_dst++;
	dst_len = copy_dst - dst;
	len = size - dst_len;
	if (len == 0)
		return (dst_len + ft_strlen(copy_src));
	while (*copy_src != '\0')
	{
		if (len != 1)
		{
			*copy_dst++ = *copy_src;
			len--;
		}
		copy_src++;
	}
	*copy_dst = '\0';
	return (dst_len + (copy_src - src));
}
