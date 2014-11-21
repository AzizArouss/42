/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <gfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:56:06 by gfernand          #+#    #+#             */
/*   Updated: 2013/11/30 16:57:36 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	unsigned int	len;

	len = ft_strlen(s);
	str = (char *) ft_memalloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (f != NULL)
			str[i] = f(i, s[i]);
		else
			str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
