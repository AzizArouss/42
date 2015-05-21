/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 05:13:14 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/10 20:16:03 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(*(char *)(s + i));
		i++;
	}
	res[i] = '\0';
	return (res);
}
