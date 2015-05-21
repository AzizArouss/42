/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:21:58 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/20 18:15:19 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		temp = i;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (!s2[j])
				return ((char*)s1 + temp);
		}
		i = temp;
		i++;
	}
	return (0);
}
