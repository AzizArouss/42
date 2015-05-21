/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:09:26 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 16:26:12 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		a = *(unsigned char *)s1;
		b = *(unsigned char *)s2;
		if (a != b)
			return ((int)(a - b));
		i++;
		s1++;
		s2++;
	}
	return (0);
}
