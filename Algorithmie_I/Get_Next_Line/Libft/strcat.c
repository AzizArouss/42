/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:41:07 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/22 12:36:55 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*s1o;
	size_t	j;

	s1o = s1;
	j = 0;
	if (!s2)
		return (s1);
	while (*s1)
		s1++;
	while (s2[j])
		*s1++ = s2[j++];
	*s1 = '\0';
	return (s1o);
}
