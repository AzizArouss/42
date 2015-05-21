/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:15:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:21 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*copy_src;
	unsigned char		*copy_dst;

	if (!dst || !src)
		return (NULL);
	copy_src = (const unsigned char *)src;
	copy_dst = (unsigned char *)dst;
	while (n--)
		*copy_dst++ = *copy_src++;
	return (dst);
}
