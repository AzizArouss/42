/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:20:37 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/06 16:24:26 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*dst;
	const char		*src = s2;

	dst = s1;
	while (n--)
	{
		*dst++ = *src;
		if (*src == (unsigned char)c)
			return (dst);
		src++;
	}
	return (0);
}
