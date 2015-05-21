/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 10:14:29 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/21 10:20:20 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	void		*tmp;

	i = 0;
	tmp = (void *)s;
	while (i < n)
	{
		if (((unsigned char *)tmp)[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
