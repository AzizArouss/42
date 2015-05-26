/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarouss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 07:46:19 by aarouss           #+#    #+#             */
/*   Updated: 2015/05/26 07:50:18 by aarouss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	if (!(str1 = (char *)s1) ||
		!(str2 = (char *)s2))
		return (0);
	if (n == 0)
		return (0);
	counter = 0;
	while ((str1[counter] == str2[counter]) && (counter + 1 < n))
		counter++;
	return ((str1[counter] - str2[counter]));
}
