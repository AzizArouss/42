/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:47:56 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/24 10:20:45 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*s1c;
	char	*s2c;
	size_t	i;
	size_t	copiedIndex;

	if (!s1 || !s2 || !n)
		return (s1);
	i = 0;
	s1c = (char *) s1;
	s2c = (char *) s2;
	while (i < n)
	{
		copiedIndex = (s1c > s2c) ? n - i - 1 : i;
		s1c[copiedIndex] = s2c[copiedIndex];
		i++;
	}
	return (s1);
}
