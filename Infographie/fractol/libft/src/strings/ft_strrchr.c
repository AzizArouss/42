/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:09:35 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/20 18:46:58 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	ch;

	ch = (char)c;
	res = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (ch == '\0')
		return ((char *)(s + ft_strlen((char *)s)));
	while (s[i])
	{
		if (s[i] == ch)
			res = (char *)(s + i);
		i++;
	}
	return (res);
}
