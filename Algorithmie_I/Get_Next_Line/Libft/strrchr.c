/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:50:49 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:59:41 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;
	char	search;
	int		mem;

	search = (char)c;
	i = 0;
	mem = -1;
	s2 = (char *)s;
	while (s2[i])
	{
		if (s2[i] == search)
			mem = i;
		i++;
	}
	if (s2[i] == search)
		mem = i;
	if (mem == -1)
		return (NULL);
	return (&s2[mem]);
}
