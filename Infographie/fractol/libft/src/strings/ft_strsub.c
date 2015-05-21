/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:20:46 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/14 20:56:41 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy to a new buffer len characters from s starting from offset start.
** Adds '\0' after writing len characters to the new buffer.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*res;
	char		*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)(s + start);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		*(res + i) = *(str + i);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}
