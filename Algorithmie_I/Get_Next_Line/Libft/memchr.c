/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:04:07 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/26 12:35:42 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}
