/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:46:16 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:17 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	counter;

	if (!(str = (char *)s))
		return (NULL);
	counter = 0;
	while (counter < n)
	{
		if ((char)c == str[0])
			return ((void*)str);
		str++;
		counter++;
	}
	return (NULL);
}
