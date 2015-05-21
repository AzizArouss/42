/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:14:25 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:19 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*copy_src;
	unsigned char		*copy_dst;
	unsigned char		cara;

	if (!dst && !src)
		return (NULL);
	cara = (unsigned char)c;
	copy_src = (const unsigned char *)src;
	copy_dst = (unsigned char *)dst;
	while (n--)
		if ((*copy_dst++ = *copy_src++) == cara)
			return (copy_dst);
	return (NULL);
}
