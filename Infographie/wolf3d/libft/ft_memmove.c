/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:14:29 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/30 14:50:17 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destbis;
	char	*srcbis;

	destbis = dest;
	srcbis = (void *)src;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	while (n)
	{
		n--;
		destbis[n] = srcbis[n];
	}
	return (dest);
}
