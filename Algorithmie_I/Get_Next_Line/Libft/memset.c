/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:12:14 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/25 15:22:54 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*b_str;

	if (!b || !len)
		return (b);
	i = 0;
	b_str = (char *) b;
	while (i < len)
		b_str[i++] = (unsigned char) c;
	return (b);
}
