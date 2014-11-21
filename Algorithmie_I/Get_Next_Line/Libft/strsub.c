/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:39:42 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/25 14:34:11 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*scpy;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (len + start > size)
		len = size - start;
	scpy = ft_strnew (len + 1);
	if (scpy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		scpy[i] = s[start + i];
		i++;
	}
	scpy[i] = 0;
	return (scpy);
}
