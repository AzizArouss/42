/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 03:15:06 by cfernand          #+#    #+#             */
/*   Updated: 2015/01/28 00:01:47 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Creates a new string of length size characters and adds a '\0' at its end.
** 		/!\ size mustn't be greater than ULONG_MAX - 1
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	while (i < size + 1)
	{
		*(char *)(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
