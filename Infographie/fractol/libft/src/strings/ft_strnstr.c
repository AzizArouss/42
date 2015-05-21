/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:29:44 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 17:20:04 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;
	int		temp;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		temp = -1;
		if (s1[i] == s2[j])
			temp = i;
		while (s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
			if (!s2[j])
				return ((char *)s1 + temp);
		}
		if (temp > -1)
			i = temp;
		i++;
	}
	return (NULL);
}
