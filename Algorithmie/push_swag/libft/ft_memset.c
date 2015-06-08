/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 13:19:50 by aarouss           #+#    #+#             */
/*   Updated: 2015/06/08 13:25:58 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*str;

	str = (char *)b;
	if (!str)
		return (NULL);
	if (len == 0)
		return (str);
	counter = 0;
	while (counter < len)
	{
		str[counter] = (char)c;
		counter++;
	}
	return (b);
}
