/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:12:53 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:57:49 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	j;
	char	*s1o;

	s1o = s1;
	if (!s2 || !n)
		return (s1);
	while (*s1)
		s1++;
	j = 0;
	while (j < n && s2[j])
		*s1++ = s2[j++];
	*s1 = 0;
	return (s1o);
}
