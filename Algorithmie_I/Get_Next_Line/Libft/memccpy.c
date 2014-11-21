/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:33:58 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/22 19:12:24 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	i;
	char	*s1c;
	char	*s2c;

	if (!s1 || !s2 || !n)
		return (NULL);
	i = 0;
	s1c = (char *) s1;
	s2c = (char *) s2;
	while (i < n)
	{
		s1c[i] = s2c[i];
		if (s2c[i] == (unsigned char) c)
			return (s1 + i + 1);
		++i;
	}
	return (NULL);
}
