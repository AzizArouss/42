/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:13:45 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/22 19:17:59 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1c;
	char	*s2c;

	if (!n)
		return (0);
	s1c = (char *) s1;
	s2c = (char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] != s2c[i])
			return (((unsigned char) s1c[i]) - ((unsigned char) s2c[i]));
		++i;
	}
	return (0);
}
