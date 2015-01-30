/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <aarouss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:32:01 by aarouss           #+#    #+#             */
/*   Updated: 2015/01/30 14:50:18 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)d;
	i = 0;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (d);
}
