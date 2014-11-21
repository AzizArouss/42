/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:38:51 by gfernand          #+#    #+#             */
/*   Updated: 2013/12/22 12:36:53 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*buff;
	char	*copy;

	i = 0;
	if (!s1 || !s2 || !n)
		return (s1);
	buff = (char *) s1;
	copy = (char *) s2;
	while (i < n)
	{
		buff[i] = copy[i];
		i++;
	}
	return (s1);
}
