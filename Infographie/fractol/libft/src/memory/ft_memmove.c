/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:28:25 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/22 20:13:23 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	if (!(tab = (unsigned char *)ft_strnew(len)))
		return (NULL);
	if (!dst || !src)
		return (NULL);
	while (i < len)
	{
		tab[i] = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(dst + i) = tab[i];
		i++;
	}
	ft_strdel((char **)&tab);
	return (dst);
}
