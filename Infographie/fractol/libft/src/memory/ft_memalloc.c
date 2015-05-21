/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 02:26:34 by cfernand          #+#    #+#             */
/*   Updated: 2014/11/12 16:27:38 by cfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	*(char *)(ptr + i) = 0;
	return (ptr);
}
