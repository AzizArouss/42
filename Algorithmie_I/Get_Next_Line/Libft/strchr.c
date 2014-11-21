/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:11:04 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/22 18:45:03 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;
	char	search;

	search = (char)c;
	i = 0;
	s2 = (char *)s;
	while (s2[i])
	{
		if (s2[i] == search)
			return (&s2[i]);
		i++;
	}
	if (s2[i] == search)
		return (&s2[i]);
	return (NULL);
}
