/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:37:41 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:57:22 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	int		size;

	size = ft_strlen(s);
	str = (char *) ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (f != NULL)
			str[i] = f(s[i]);
		else
			str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
